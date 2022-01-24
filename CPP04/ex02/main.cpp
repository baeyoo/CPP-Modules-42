#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	/*Animal test;
	Animal *ptest = new Animal();*/
    std::cout << Cyan;
    const Animal *array[4];
    for(int k = 0; k < 4; k++)
    {
        if(k % 2)
            array[k] = new Dog();
        else   
            array[k] = new Cat();
    }
    std::cout << std::endl;
    for (int k = 0; k < 4; k++)
    {
        delete array[k];
    }

    std::cout << Green << std::endl;
    Dog basic;
    {
        std::cout << std::endl;
        Dog tmp = basic;
    }
    std::cout << std::endl;
}