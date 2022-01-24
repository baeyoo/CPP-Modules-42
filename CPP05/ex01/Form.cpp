#include "Form.hpp"

Form::Form():_name("default_form"), _signed(false), _signvalue(50), _execvalue(50)
{
    _signed = false;
    std::cout << "[Form] Default costructor called" << std::endl;
}

Form::Form(std::string name, unsigned int signvalue, unsigned int execvalue):_name(name), _signvalue(signvalue), _execvalue(execvalue)
{
    _signed = false;
    if (signvalue > 150)
		throw GradeTooLowException("Cannot create Form with sign value lower than 150");
	if (signvalue < 1)
		throw GradeTooHighException("Cannot create Form with sign value higher than 1");
    if (execvalue > 150)
		throw GradeTooLowException("Cannot create Form with exec value lower than 150");
	if (execvalue < 1)
		throw GradeTooHighException("Cannot create Form with exec value higher than 1");
    std::cout << "[Form] Costructor called" << std::endl;
}

Form::Form(Form const &src):_name(src._name), _signvalue(src._signvalue), _execvalue(src._execvalue)
{
    *this = src;
    std::cout << "[Form] Copy costructor called" << std::endl;
}

Form& Form::operator=(Form const &src)
{
    _signed = src._signed;
    return(*this);
}

const std::string Form::getName() const
{
    return(_name);
}

bool Form::getSigned() const
{
    return(_signed);
}

unsigned int Form::getSignValue() const
{
    return(_signvalue);
}

unsigned int Form::getExecValue() const
{
    return(_execvalue);
}

void Form::beSigned(Bureaucrat & bureaucrat)
{
    if (bureaucrat.getGrade() <= getSignValue())
        _signed = true;
    else
        throw GradeTooLowException(bureaucrat.getName() + " level is too low"); // x Michi xD
}

std::ostream& operator<<(std::ostream& out, Form & form)
{
    out << "----- [ FORM REPORT ] -----" << std::endl
	<< "Form name:\t" << form.getName() << std::endl
	<< "Sign grade:\t" << form.getSignValue() << std::endl
	<< "Exec grade:\t" << form.getExecValue() << std::endl
	<< "Sign status:\t" << form.getSigned() << std::endl
	<< "---------------------------";
    return(out);
}

Form::~Form()
{
    std::cout << "[Form] Destructor called" << std::endl;
}