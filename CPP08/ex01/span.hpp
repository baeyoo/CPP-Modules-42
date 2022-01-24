#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <unistd.h>


# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define BLUE			"\033[34m"				/* Blue */
# define YELLOW			"\033[33m"				/* Yellow */


class TooManyElements: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "I'm sorry, but we are full! Can't add another number";
	}
};

class TooFewElements: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Not enough elements...";
	}
};

class NoSpanToBeFound: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "No span can be found";
	}
};

class Span {
    private:
        unsigned int _n;
        std::vector<int> _vect;
    public:
        Span();
        Span(unsigned int const n);
        Span(Span const & src);
        ~Span();
        Span & operator=(Span const & rhs);

        void   	addNumber(const int n);
        int		shortestSpan(void);
		int		longestSpan( void );
		void	printvector( void ) const;

};

#endif