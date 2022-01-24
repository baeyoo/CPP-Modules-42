#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <iostream>

template <typename T>
class Array
{
	private:
		T * _data;
		unsigned int _size;

	public:
		class Overflow : public std::exception
		{
			public:
				const char * what() const throw() 
				{
					return ("Array overflow.. :c ");
				};
		};

		Array() 
		{
			this->_data = NULL;
			this->_size = 0;
		}

		Array(unsigned int const n)
		{
			this->_data = new T[n];
			this->_size = n;

			for (unsigned int i = 0; i < n; i++)
				this->_data[i] = 0;
		}

		Array(Array const & src)
		{
			this->_data = NULL;
			*this = src;
		}

		~Array()
		{
			delete [] this->_data;
		}
		
		Array & operator=(Array const & rhs)
		{
			delete [] this->_data;

			this->_data = new T[rhs._size];
			this->_size = rhs._size;

			for (unsigned int i = 0; i < rhs._size; i++)
				this->_data[i] = rhs._data[i];

			return *this ;
		}

		T & operator[](unsigned int i)
		{
			if (i >= this->_size) throw Overflow();
			return this->_data[i];
		}

		unsigned int size() { return this->_size; }
};

#endif