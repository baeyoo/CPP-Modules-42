#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "mstack size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    std::cout << "The value should be 3: " << GREEN << *it << RESET << std::endl; //should be 3
    --it;
    std::cout << "The value should be 5: "<< GREEN << *it << RESET << std::endl; //should be 5 (previous element in stack)

    std::cout << MAGENTA << "Printing all the values in mstack" << RESET << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << CYAN << "MutantStack of char" << RESET << std::endl;

    MutantStack<char> cstack;
    cstack.push('a');
    cstack.push('b');
    std::cout << cstack.top() << std::endl;
    cstack.pop();
    std::cout << "cstack size: " << cstack.size() << std::endl;
    cstack.push('c');
    cstack.push('d');
    cstack.push('z');
    //[...]
    cstack.push('o');
    MutantStack<char>::reverse_iterator it2 = cstack.rbegin();
    MutantStack<char>::reverse_iterator ite2 = cstack.rend();
    ++it2;
    std::cout << "The value should be z: " << GREEN << *it2 << RESET << std::endl; //should be  z
    --it2;
    std::cout << "The value should be o: "<< GREEN << *it2 << RESET << std::endl; //should be  o

    std::cout << CYAN << "Printing all the values in Cstack" << RESET << std::endl;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    std::cout << YELLOW << "Difference Between Stack and Deque" << RESET << std::endl;

    std::stack<int> s(mstack);
    std::cout << s.top() << std::endl;

    std::deque<int> mydeque(5, 100);
    std::deque<int>::iterator it3;

    it3 = mydeque.begin();
    std::cout << *it3 << std::endl;


    return 0;
}