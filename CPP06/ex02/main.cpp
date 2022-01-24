#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define	Green "\e[0;32m"
#define	Cyan "\e[0;36m"
#define Reset "\e[0m"

Base* generate(void)
{
    srand(time(NULL));
    switch (rand() % 3)
    {
    case 0:
        return new A;
        break;
    case 1:
        return new B;
        break;
    case 2:
        return new C;
        break;
    default:
        return NULL;
        break;
    }
}

void identify(Base *base)
{
    if (dynamic_cast<A *>(base))
        std::cout << Green << "identifier *: A" << Reset << std::endl;
    if (dynamic_cast<B *>(base))
        std::cout << Green << "identifier *: B" << Reset << std::endl;
    if (dynamic_cast<C *>(base))
        std::cout << Green << "identifier *: C" << Reset << std::endl;    
}

void identify(Base &base)
{
    try
    {
       (void)dynamic_cast<A &>(base);
       std::cout << Cyan << "identifier &: A" << Reset << std::endl;
    }
    catch(const std::exception &e)
    {
    }
    try
    {
       (void)dynamic_cast<B &>(base);
       std::cout << Cyan << "identifier &: B" << Reset << std::endl;
    }
    catch(const std::exception &e)
    {
    }
    try
    {
       (void)dynamic_cast<C &>(base);
       std::cout << Cyan << "identifier &: C" << Reset << std::endl;
    }
    catch(const std::exception &e)
    {
    }
}

int main(void)
{
    Base *tmp;

    tmp = generate();

    identify(tmp);
    identify(*tmp);

    delete tmp;
    return 0;
}