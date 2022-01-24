#include "span.hpp"

int main()
{
	try
	{
		Span myarr(5);
		Span second_arr;
		myarr.addNumber(5);
		myarr.addNumber(3);
		myarr.addNumber(17);
		myarr.addNumber(9);
		myarr.addNumber(11);

		std::cout << myarr.shortestSpan() << std::endl;
		std::cout << myarr.longestSpan() << std::endl;

		Span pippo;
		second_arr = pippo;
		std::cout << second_arr.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	
	try
	{
		Span myarr(2);
		Span second_arr;
		myarr.addNumber(13);
		myarr.addNumber(36);
		myarr.addNumber(21);

	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	try
	{
		int n;
		std::cout << YELLOW << "\nNote that a number higher than 10000 can take a while\nInsert the number " << RESET << std::endl;
		std::cin >> n;
        if (n > 10000)
            std::cout << "\nniente...sei de coccio\n";
		Span myarr(n);
		srand(time(0));
		for (int i = 0; i < n; i++)
			myarr.addNumber(rand() % rand());

		std::cout << myarr.shortestSpan() << std::endl;
		std::cout << myarr.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
}