#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat mario("Mario", 146);
    Bureaucrat luigi("Luigi", 5);
    
    std::cout << Red << std::endl << "test Mario" << std::endl;
    try
    {
        mario.increment_level(5);
        mario.decrement_level(10);
    }
    catch(const std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }
    std::cout << Green << std::endl << "test Luigi" << std::endl;
    try
    {
        luigi.decrement_level(5);
        luigi.increment_level(10);
    }
    catch(const std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }
    std::cout << Yellow << std::endl << "test <<" << std::endl;
    std::cout << mario << std::endl << luigi << std::endl << Reset;
}