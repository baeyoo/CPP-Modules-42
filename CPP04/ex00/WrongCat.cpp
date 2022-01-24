#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WRONGCAT";
	std::cout << "[WRONGCAT] Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	type = copy.type;
	std::cout << "[WRONGCAT] Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	type = src.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "OOOOOAIM🐱" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WRONGCAT] Destructor called" << std::endl;
}
