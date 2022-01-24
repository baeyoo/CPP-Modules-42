#include "span.hpp"

Span::Span() {

}

Span::Span(unsigned int const n) : _n(n) {

}

 Span::~Span(){
 }

Span::Span(Span const & rhs){
    *this = rhs;
}

Span & Span::operator=(Span const & rhs)
{
	this->_n = rhs._n;
	this->_vect = rhs._vect;
	return *this;
}

void	Span::addNumber(const int n) {
	
	if (this->_vect.size() >= this->_n)
		throw TooManyElements();
	_vect.push_back(n);
}

int		Span::shortestSpan(void)
{
    if (this->_vect.size() < 2)
	    throw TooFewElements();
	int temp_span;
	int shortest = abs(this->_vect[1] - this->_vect[0]);
	for (unsigned long int i = 0; i < this->_vect.size(); i++)
	{
		for (unsigned long int y = i + 1; y < this->_vect.size(); y++)
		{
			temp_span = abs(this->_vect[y] - this->_vect[i]);
			if (temp_span < shortest)
				shortest = temp_span;
		}
	}
	return (shortest);
}

int		Span::longestSpan( void )
{
    if (this->_vect.size() < 2)
	    throw TooFewElements();
	int temp_span;
	int longest = abs(this->_vect[1] - this->_vect[0]);
	for (unsigned long int i = 0; i < this->_vect.size(); i++)
	{
		for (unsigned long int y = i + 1; y < this->_vect.size(); y++)
		{
			temp_span = abs(this->_vect[y] - this->_vect[i]);
			if (temp_span > longest)
				longest = temp_span;
		}
	}
	return (longest);
}

void Span::printvector( void ) const {

	for (unsigned long int i = 0; i < this->_vect.size(); i++)
		std::cout << this->_vect[i] << std::endl;
}
