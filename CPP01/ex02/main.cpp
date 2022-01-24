#include <iostream>

int main ()
{
	std::string object = "HI THIS IS BRAIN";
	std::string	*stringPTR  = &object;
	std::string &stringREF = *stringPTR;

	std::cout << "Address by variable: ";
	std::cout << &object <<std::endl;
	std::cout << "Address by pointer: ";
	std::cout << stringPTR <<std::endl;
	std::cout << "Address by reference: ";
	std::cout << &stringREF <<std::endl;
	std::cout << "String by pointer: ";
	std::cout << *stringPTR <<std::endl;
	std::cout << "String by reference: ";
	std::cout << stringREF <<std::endl;

	return (0);
}