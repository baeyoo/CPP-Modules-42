#include "Cure.hpp"
#include "ICharacter.hpp"


Cure::Cure(): AMateria("cure")
{
    std::cout << "[CURE] Costructor called" << std::endl;
}

Cure::Cure(Cure const &src)
{
    _type = src._type;
    std::cout << "[CURE] Copy costructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "[CURE] Destructor called" << std::endl;
}

Cure& Cure::operator=(Cure const &src)
{
    _type = src._type;
    return(*this);
}

AMateria* Cure::clone() const
{
    return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}
