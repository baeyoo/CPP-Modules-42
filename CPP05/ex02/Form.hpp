#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>

#include "Bureaucrat.hpp"

class Form{
    public:
    class GradeTooHighException: public std::exception
    {
        public:
            GradeTooHighException(std::string msg) : _msg(msg) { }
            ~GradeTooHighException() throw(){}
            const char *what() const throw()
            {
                return(_msg.c_str());
            }
        private:
            std::string _msg;
    };
    class GradeTooLowException: public std::exception
    {
        public:
            GradeTooLowException(std::string msg) : _msg(msg) { }
            ~GradeTooLowException() throw(){}
            const char *what() const throw()
            {
                return(_msg.c_str());
            }
        private:
            std::string _msg;
    };
    class FormException: public std::exception
    {
        public:
            FormException(std::string msg) : _msg(msg) { }
            ~FormException() throw(){}
            const char *what() const throw()
            {
                return(_msg.c_str());
            }
        private:
            std::string _msg;
    };
        Form();
        Form(std::string name, unsigned int singvalue, unsigned int execvalue);
        Form(Form const &src);
        virtual ~Form();
        Form& operator=(Form const &src);
        const std::string getName() const;
        bool getSigned() const;
    	unsigned int getSignValue() const;
        unsigned int getExecValue() const;
        std::string getTarget() const;
        void beSigned(Bureaucrat & bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
        void check_execute(Bureaucrat const & executor) const;
    protected:
        const std::string _name;
        bool _signed;
        const unsigned int _signvalue;
        const unsigned int _execvalue;
        std::string target;
};

std::ostream& operator<<(std::ostream& s, Form & form);

#endif