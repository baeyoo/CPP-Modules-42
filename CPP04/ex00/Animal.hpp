#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		Animal& operator=(const Animal &src);
		virtual ~Animal();
		std::string const & getType(void) const;
		virtual void	makeSound(void) const;
	protected:
		std::string type;
};

#endif