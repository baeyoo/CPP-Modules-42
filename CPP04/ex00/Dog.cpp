#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "DOG";
	std::cout << "[DOG] Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	type = copy.type;
	std::cout << "[DOG] Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	type = src.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "BAUUUUU🐶" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[DOG] Destructor called" << std::endl;
}