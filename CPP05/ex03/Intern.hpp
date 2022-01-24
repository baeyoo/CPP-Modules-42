#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Form* makeForm(std::string nameForm, std::string target);
        Intern & operator=(Intern const & src);
        class FormNotFound : public std::exception
        {
            public:
                FormNotFound(std::string msg) : _msg(msg) { }
                ~FormNotFound() throw(){}
                const char *what() const throw()
                {
                    return(_msg.c_str());
                }
            private:
                std::string _msg;
        };
};

#endif