#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal_default";
	std::cout << "[ANIMAL] Constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	type = copy.type;
	std::cout << "[ANIMAL] Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &src)
{
	type = src.type;
	return (*this);
}

std::string const & Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "*" + type + " default_sound*" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[ANIMAL] Destructor called" << std::endl;
}