#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreation", 145, 137)
{
    target = "defaultSCF";
    std::cout << "[SCF] Constructor called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):Form("ShrubberyCreation", 145, 137)
{
    target = _target;
    std::cout << "[SCF] Constructor called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy):Form("ShrubberyCreation", 145, 137)
{
    target = copy.target;
    std::cout << "[SCF] Copy costructor called" << std::endl; 
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
    target = copy.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "[SCF] Distructor called" << std::endl; 
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    check_execute(executor);
    std::ofstream outfile;
    outfile.open(target + "_Shrubbery", std::ios::app);
    if (!outfile.is_open())
        throw FormException("No space left in the forest.. :c");
    else
    {    
        outfile << "     /\\" << std::endl \
        << "     /\\ " << std::endl \
        << "    /  \\ " << std::endl \
        << "    /~~\\o " << std::endl \
        << "   /o   \\ " << std::endl \
        <<  "  /~~*~~~\\ " << std::endl \
        << " o/    o \\ " << std::endl \
        << " /~~~~~~~~\\ " << std::endl \
        << "/__*_______\\ " << std::endl \
        << "     || "<< std::endl \
        << "  / ==== / "<< std::endl << std::endl ;
    }
    outfile.close();
}