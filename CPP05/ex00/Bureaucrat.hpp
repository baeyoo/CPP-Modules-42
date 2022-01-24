#ifndef BUREAUCRAT_HPP 
#define BUREAUCRAT_HPP 

#include <string>
#include <iostream>
#include <stdexcept>

#define	Black "\e[0;30m"
#define	Red "\e[0;31m"	
#define	Green "\e[0;32m"
#define	Yellow "\e[0;33m"	
#define	Blue "\e[0;34m"	
#define	Purple "\e[0;35m"	
#define	Cyan "\e[0;36m"	
#define	White "\e[0;37m"
#define Reset "\e[0m"

class Bureaucrat 
{
	public:
		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException(std::string msg) : _msg(msg) { }
				~GradeTooHighException() throw(){}
				const char *what() const throw()
				{
					return (_msg.c_str());
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
					return (_msg.c_str());
				}
			private:
				std::string _msg;
		};
	
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const &src);
		void increment_level(unsigned int incr) throw(GradeTooHighException);
		void decrement_level(unsigned int decr) throw(GradeTooLowException);
		std::string const getName() const;
		unsigned int getGrade() const;
	private:
		std::string const _name;
		unsigned int _grade;
};

std::ostream& operator<<(std::ostream& s, Bureaucrat & bureaucrat);

#endif
