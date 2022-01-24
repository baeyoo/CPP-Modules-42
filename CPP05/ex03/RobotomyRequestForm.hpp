#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

#include <cstdlib>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm & other);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
};

#endif