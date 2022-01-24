/* #include <cstdlib>
#include <iostream>

#include "array.hpp"

 int main(void) 
{
	Array<int>	a(2);

	a[0] = 42;
	a[1] = 21;

	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a.size() << std::endl;

	Array<int>	b(a);
	std::cout << b[0] << std::endl;
	std::cout << b[1] << std::endl;
	std::cout << b.size() << std::endl;

	return 0;
} */

#include "array.hpp"
#include <iostream>
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    Array<long> test;
    Array<long> test2 = test;
    Array<long> test3(test2);
    (void)test3;

    Array<long> test4(10);
    try
    {
        for (int i = 0; i < 15; i++) //15 is on purpose
        {
            const int value = rand();
            test4[i] = value;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Array<long> test5 = test4;
    Array<long> test6(test5);

    test4[5] = 50;
    std::cout << "test4[5] = " << test4[5] << std::endl;
    std::cout << "test5[5] = " << test5[5] << std::endl;
    std::cout << "test6[5] = " << test6[5] << std::endl;
    std::cout << "test4.size() = " << test4.size() << std::endl;
    return 0;
}
