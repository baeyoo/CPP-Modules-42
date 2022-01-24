#ifndef SHUBBERYCREATIONFORM
# define SHUBBERYCREATIONFORM

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};

#endif