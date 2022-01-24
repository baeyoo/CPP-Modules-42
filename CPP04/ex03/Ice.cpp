#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "[ICE] Costructor called" << std::endl;
}

Ice::Ice(Ice const &src)
{
    _type = src._type; 
    std::cout << "[ICE] Copy costructor called" << std::endl;
}

Ice::~Ice()
{
        std::cout << "[ICE] Destructor called" << std::endl;
}

Ice& Ice::operator=(Ice const &src)
{
    _type = src._type;
    return(*this);
}

AMateria* Ice::clone() const
{
    return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}