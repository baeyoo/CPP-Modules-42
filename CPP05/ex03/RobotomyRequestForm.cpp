 #include "RobotomyRequestForm.hpp"
 
 //RRF Values -> sign 72, exec 45

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestCreation", 72, 45)
{
	target = "default_RRF";
	std::cout << "[RRF] Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestCreation", 72, 45)
{
	this->target = target;
	std::cout << "[RRF] Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):Form("RobotomyRequestCreation", 72, 45)
{
	this->target = other.target;
	std::cout << "[RRF] Copy constructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
	target = other.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "[RRF] Distructor called" << std::endl; 
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	check_execute(executor);
	std::cout << "* L O U D   D R I L L I N G   N O I S E S *" << std::endl;
	srand(time(NULL));
	if(rand() % 2)
	 	std::cout << target << " has been successfully robotomized" << std::endl;
	else
		throw FormException("Failed in executing a Robotomy Request Form.. ");
}

