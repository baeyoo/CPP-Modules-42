#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main(void)
{
    // Bureaucrat signer("Mario Rossi", 145);
	// Bureaucrat w_signer("Mario Rossi",	146);
	// Bureaucrat executor("Luigi Bianchi", 137);
	// Bureaucrat executor("Luigi Bianchi", 138);

	Bureaucrat signer("Mario Rossi", 145);
	Bureaucrat w_signer("Wario Rossi",	146);
	Bureaucrat executor("Luigi Bianchi", 137);
	Bureaucrat w_executor("Waluigi Bianchi", 138);

	PresidentialPardonForm art3("Vale"); //sign 145, exec 137
	RobotomyRequestForm art2("Vale"); //sign 72, exec 45
	ShrubberyCreationForm art1("Vale"); //sign 25, exec 5

	std::cout << std::endl << Green;
	try
	{
		w_signer.signForm(art1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		signer.signForm(art1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		w_executor.executeForm(art1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		executor.executeForm(art1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//
	std::cout << std::endl << Reset;
	signer.increment_level(73);
	w_signer.increment_level(72);
	executor.increment_level(92);
	w_executor.increment_level(91);
//
	std::cout << std::endl << Yellow;
	try
	{
		w_signer.signForm(art2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		signer.signForm(art2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		w_executor.executeForm(art2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		executor.executeForm(art2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//
	std::cout << std::endl << Reset;
	signer.increment_level(47);
	w_signer.increment_level(46);
	executor.increment_level(40);
	w_executor.increment_level(39);
//
	std::cout << std::endl << Red;
	try
	{
		w_signer.signForm(art3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		signer.signForm(art3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		w_executor.executeForm(art3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		executor.executeForm(art3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Reset <<  std::endl;
}