
#include "Data.hpp"
#include <iostream>
#include <stdint.h>

#define	Green "\e[0;32m"
#define	Yellow "\e[0;33m"
#define Reset "\e[0m"

//This cast will allow you to do reinterpretation, 
//as well as downcast and upcast.
//It's a very open form of casting only in C++

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data data;
	Data *data_ptr;
	uintptr_t raw;

	std::cout << Green << "Original input:\t\t" << &data << Reset << std::endl;
	raw = serialize(&data);
	std::cout << Yellow << "Serialized input:\t" << raw << Reset << std::endl;
	data_ptr = deserialize(raw);
	std::cout << Green << "Deserialized input:\t" << data_ptr << Reset << std::endl;

	return (0);
}