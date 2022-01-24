#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "[BRAIN] Constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "[BRAIN] Copy constructor called" << std::endl;
    int i = -1;
    while(++i < 100)
        ideas[i] = src.ideas[i];
}

Brain::~Brain()
{
    std::cout << "[BRAIN] Destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &src)
{
    std::cout << "[BRAIN] Copy constructor called" << std::endl;  
    int i = -1;
    while(++i < 100)
        ideas[i] = src.ideas[i];
    return(* this);
}