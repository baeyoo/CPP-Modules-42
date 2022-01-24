#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
	Intern		nobody;
    Form *		form;
    Bureaucrat	pippo("Pippo", 1);
	try 
    {
        std::cout << std::endl << Cyan;
		form = nobody.makeForm("pardon", "Braccobaldo");
        pippo.signForm(*form);
        pippo.executeForm(*form);
        delete form;
    }
    catch (std::exception const & e)
    {
        std::cout << Red << "Error: " << e.what() << std::endl;
    }
		std::cout << Green << std::endl;
    try
    {
		form = nobody.makeForm("robotomy", "Braccobaldo");
        pippo.signForm(*form);
        pippo.executeForm(*form);
        delete form;
    }
    catch (std::exception const & e)
    {
        delete form;
        std::cout << Red << "Error: " << e.what() << std::endl;
    }
	std::cout << Yellow << std::endl;
	try
    {
        form = nobody.makeForm("shrubbery", "Braccobaldo");
        pippo.signForm(*form);
        pippo.executeForm(*form);
        delete form;
    }
    catch (std::exception const & e)
    {
        std::cout << Red << "Error: " << e.what() << std::endl;
    }
    try
    {
		std::cout << Reset << std::endl;
		form = nobody.makeForm("wrong", "whatever");
        pippo.signForm(*form);
        pippo.executeForm(*form);
    }
    catch (std::exception const & e)
    {
        std::cout << Red << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl << Reset;
	return 0 ;
}