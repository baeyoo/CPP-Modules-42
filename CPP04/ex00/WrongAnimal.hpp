#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal& operator=(const WrongAnimal &src);
		virtual ~WrongAnimal();
		std::string const & getType(void) const;
		void	makeSound(void) const;
	protected:
		std::string type;
};

#endif