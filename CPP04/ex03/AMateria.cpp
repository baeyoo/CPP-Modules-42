#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : _type("def_type")
{
    std::cout << "[AMATERIA] Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "[AMATERIA] Constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
    std::cout << "[AMATERIA] Copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria()
{
    std::cout << "[AMATERIA] Destructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria const &src)
{
    _type = src._type;
    return(*this);
}

std::string const & AMateria::getType() const
{
    return(_type);
}

/*AMateria* AMateria::clone() const{
    return(new AMateria());
}*/

void AMateria::use(ICharacter& target)
{
    std::cout << "Tanto non verrà usata" << target.getName() << std::endl;
}