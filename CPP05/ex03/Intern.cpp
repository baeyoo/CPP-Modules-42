#include "Intern.hpp"
#include <string>

Intern::Intern()
{

}

Intern::Intern(Intern const & src)
{
    *this = src ;
}

Intern::~Intern()
{

}

Intern & Intern::operator=(Intern const & src)
{
	(void)src;
	return *this ;
}

Form* makePresidentialForm(std::string target)
{
    return new PresidentialPardonForm(target);
}
Form* makeRobotomyForm(std::string target)
{
    return new RobotomyRequestForm(target);
}
Form* makeShrubberyForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form * Intern:: makeForm(std::string const name, std::string const target) 
{
	std::string list[3] = {"pardon", "robotomy", "shrubbery"};
    int candidate;
    for (candidate = 0; candidate < 3; candidate++) {
        if (name == list[candidate])
            break ;
    }
    if (candidate == 3)
        throw FormNotFound("Form type not found :-/");
    Form* (*func_ptr[3])(std::string) = {makePresidentialForm, makeRobotomyForm, makeShrubberyForm};
    return func_ptr[candidate](target);
}