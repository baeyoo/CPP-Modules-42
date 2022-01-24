#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name("Scooby"), _grade(50)
{
    std::cout << "[Bureaucrat] Default costructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name)
{
	if (grade > 150)
		throw GradeTooLowException("Cannot create Bureaucrat with grade lower than 150");
	if (grade < 1)
		throw GradeTooHighException("Cannot create Bureaucrat with grade higher than 1");
	this->_grade = grade;
    std::cout << "[Bureaucrat] Costructor called with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << "[Bureaucrat] Copy costructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &src)
{
	_grade = src.getGrade();
	return (*this);
}

std::string const Bureaucrat::getName() const
{
    return(_name);
}

unsigned int Bureaucrat::getGrade() const
{
    return(_grade);
}

void Bureaucrat::increment_level(unsigned int incr) throw(GradeTooHighException)
{
	if (incr >= _grade)
		throw GradeTooHighException("Bureaucrat would exceed level 1");
	else
	{
		_grade -= incr;
		std::cout << _name << " increase " << incr << " levels" << std::endl;
	}
}

void Bureaucrat::decrement_level(unsigned int decr) throw(GradeTooLowException)
{
	if ((decr + _grade) > 150)
		throw GradeTooLowException("Bureaucrat would subceed level 150");
	else
	{
		_grade += decr;
		std::cout << _name << " decrease " << decr << " levels" << std::endl;
	}
}

std::ostream& operator<<(std::ostream &out, Bureaucrat & bureaucrat)
{
    out << "Bureaucrat name is: " << bureaucrat.getName() << std::endl; 
    out << "Bureaucrat grade is: " << bureaucrat.getGrade() << std::endl;
    return(out);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "[Bureaucrat] Destructor called" << std::endl;
}

void Bureaucrat::signForm(Form &src)
{
	src.beSigned(*this);
	std::cout << getName() << " signs " <<  src.getName() <<std::endl;
}