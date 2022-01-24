#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void
iter(T const *array, unsigned int lenght, void (* funct)(T))
{
	for(unsigned int i = 0; i < lenght; i++)
		(*funct)(array[i]);
}

template <typename T>
void
print(T const elem)
{
	std::cout << elem <<std::endl;
}

#endif