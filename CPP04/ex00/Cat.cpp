#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "CAT";
	std::cout << "[CAT] Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	type = copy.type;
	std::cout << "[CAT] Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
	type = src.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "MIAOOOO🐱" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[CAT] Destructor called" << std::endl;
}
