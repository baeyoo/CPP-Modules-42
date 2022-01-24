#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "CAT";
	brain = new Brain();
	std::cout << "[CAT] Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : brain(nullptr)
{
	std::cout << "[CAT] Copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat &src)
{
	if (this == &src)
		return (*this);
	type = src.type;
	if (brain)
		delete (brain);
	brain = new Brain(*src.brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "MIAOOOO🐱" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "[CAT] Destructor called" << std::endl;
}
