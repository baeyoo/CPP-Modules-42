#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal_default";
	std::cout << "[WRONGANIMAL] Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	type = copy.type;
	std::cout << "[WRONGANIMAL]] Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
	type = src.type;
	return (*this);
}

std::string const & WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*" + type + " default_sound*" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WRONGANIMAL] Destructor called" << std::endl;
}