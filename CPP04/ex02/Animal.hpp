#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

#define	Black "\e[0;30m"
#define	Red "\e[0;31m"	
#define	Green "\e[0;32m"
#define	Yellow "\e[0;33m"	
#define	Blue "\e[0;34m"	
#define	Purple "\e[0;35m"	
#define	Cyan "\e[0;36m"	
#define	White "\e[0;37m"
#define Reset "\e[0m"


class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		Animal& operator=(const Animal &src);
		virtual ~Animal();
		std::string const & getType(void) const;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string type;
};

#endif