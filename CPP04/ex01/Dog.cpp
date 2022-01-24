#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "[DOG] Constructor called" << std::endl;
	type = "DOG";
	brain = new Brain();
}

Dog::Dog(const Dog &copy): brain(nullptr)
{
	std::cout << "[DOG] Copy constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog &src)
{
	if (this == &src)
		return (*this);
	type = src.type;
	if (brain)
		delete (brain);
	brain = new Brain(*src.brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "BAUUUUU🐶" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "[DOG] Destructor called" << std::endl;
}