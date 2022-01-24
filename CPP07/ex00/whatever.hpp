#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T const & 
max(T const & a, T const & b)
{
	if (a == b)
		return (b);
	return (a > b ? a : b);
}


template <typename T>
T const & 
min(T const & a, T const & b)
{
	if (a == b)
		return (b);
	return (a < b ? a : b);
}

//no return for swap
template <typename T>
void swap(T & a, T & b)
{
	T c = a;
	a = b;
	b = c;
}

/* 	
	- swap: Swaps the values of two arguments. Does not return anything.

	- min: Compares the two arguments and returns the smallest one. If the two arguments are equal, then it returns the second one.

	- max: Compares the two arguments and returns the biggest one. If the two arguments are equal, then it returns the second one.
 */

#endif