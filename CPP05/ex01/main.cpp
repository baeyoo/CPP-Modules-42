#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat mario("Mario Rossi", 46);
	std::cout<<Red;
	std::cout << mario << std::endl << Reset;
	Form	art1("art1", 45, 25);
	std::cout << Yellow << "test <<" << std::endl << art1 << std::endl << Reset;
	std::cout << std::endl << Red;
	try
	{
		mario.signForm(art1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << Yellow << "test <<" << std::endl << art1 << std::endl << Reset;
	std::cout << std::endl << Red;
	try
	{
		mario.increment_level(1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << mario;
	try
	{
		mario.signForm(art1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << Yellow << "test <<" << std::endl << art1 << std::endl << Reset;
	std::cout << std::endl << Reset;
}