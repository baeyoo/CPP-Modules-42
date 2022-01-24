#include "Conversion.hpp"

#include <cmath>
#include <cerrno>
#include <limits>


Conversion::Conversion(std::string input): _input(input)
{
}

Conversion::Conversion(Conversion const &src)
{
    *this = src;
}

Conversion::~Conversion()
{
}

Conversion & Conversion::operator=(Conversion const &src)
{
    if (this->_input != src._input)
        _input = src._input;
    return(*this);
}

//____// check_input //____//

bool Conversion::check_int()
{
    size_t i = 0;
    if (_input[i] == '+' || _input[i] == '-')
        i++;
    while( i < _input.length())
    {
        if (isdigit(_input[i]))
            i++;
        else
            return (false);
    }
    return (true);
}

bool Conversion::check_float()
{
    size_t i = 0;
    size_t dot = 0;

    if (_input == "-inff" || _input == "+inff" || _input == "nanf")
        return (true);
    if (_input[i] == '+' || _input[i] == '-')
        i++;
    if (_input[_input.length() - 1] != 'f')
        return (false);
    while(i < _input.length())
    {
        if (_input[i] == '.' && isdigit(_input[i + 1]))
        {
            i++;
            dot++;
        }
        else if(isdigit(_input[i]) || (_input[i] == 'f' && _input[i + 1] == '\0'))
			i++;
        else
            return(false);
    }
    if (dot == 1)
        return (true);
    return (false);
}

bool Conversion::check_double()
{
	size_t i = 0;
    size_t dot = 0;

	if (_input == "-inf" || _input == "+inf" || _input == "nan")
        return (true);
	if (_input[i] == '+' || _input[i] == '-')
        i++;
	while (i < _input.length())
	{
		if (_input[i] == '.' && isdigit(_input[i + 1]))
		{
        	i++;
        	dot++;
        }
		else if (isdigit(_input[i]))
			i++;
		else
			return false;
	}
	if (dot == 1)
		return true;
	return false;
}

bool Conversion::check_char()
{
    if (_input.length() == 1)
        return (true);
    return (false);
}

bool Conversion::check_input()
{
    if (!check_int() && !check_char() && !check_double() && !check_float())
        return (false);
    return (true);
}

//____// convert_input //____//

void Conversion::toChar()
{
	std::cout << Green << "char:\t" << Reset;

	if (_input == "-inf" || _input == "+inf" || _input == "nan" || \
	_input == "-inff" || _input == "+inff" || _input == "nanf")
		std::cout << "Impossible :c" << std::endl;
	else if (_input.length() == 1 && !isdigit(_input[0]))
	{
		if(!isprint(_input[0]))
			std::cout << "Non displayable :c" << std::endl;
		else
			std::cout << static_cast<char>(_input[0]) << std::endl;
	}
	else
	{
		char *endPtr = nullptr;
		double result = strtod(_input.c_str(), &endPtr);

		if (result > 255 || result < 0)
			std::cout << "Impossible :c" << std::endl;
		else if (!isprint(static_cast<char>(result)))
			std::cout << "Not printable :c" << std::endl;
		else
			std::cout << static_cast<char>(result) << std::endl;
	}
}

void Conversion::toInt()
{
	std::cout << Yellow << "int:\t" << Reset;

	if (_input == "-inf" || _input == "+inf" || _input == "nan" || \
	_input == "-inff" || _input == "+inff" || _input == "nanf")
		std::cout << "Impossible :c" << std::endl;
	else if (_input.length() == 1 && !isdigit(_input[0]))
		std::cout << static_cast<int>(_input[0]) << std::endl;
	else
	{
		char *endPtr = nullptr;
		double result = strtod(_input.c_str(), &endPtr);
		if (result > std::numeric_limits<int>::max() || result < std::numeric_limits<int>::min())
			std::cout << "Impossible :c" << std::endl;
		else
			std::cout << static_cast<int>(result) << std::endl;
	}
}

void Conversion::toFloat()
{
	std::cout << Purple << "float:\t" << Reset;

	if (_input == "-inf" || _input == "+inf" || _input == "nan")
		std::cout << _input << "f" << std::endl;
	else if (_input == "-inff" || _input == "+inff" || _input == "nanf")
		std::cout << _input << std::endl;
	else if (_input.length() == 1 && !isdigit(_input[0]))
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(_input[0]) << "f" << std::endl;
	else
	{
		char *endPtr = nullptr;
		double result = strtod(_input.c_str(), &endPtr);
		if (result > std::numeric_limits<float>::max() || result < std::numeric_limits<float>::min())
			std::cout << "Impossible :c" << std::endl;
		else
			std::cout << std::setprecision(1) << std::fixed << static_cast<float>(result) << "f" << std::endl;
	}
}

void Conversion::toDouble()
{
	std::cout << Cyan << "double:\t" << Reset;

	if (_input == "-inf" || _input == "+inf" || _input == "nan")
		std::cout << _input << std::endl;
	else if (_input == "-inff" || _input == "+inff" || _input == "nanf")
		std::cout << _input.substr(0, _input.length() - 1) << std::endl;
	else if (_input.length() == 1 && !isdigit(_input[0]))
		std::cout << std::setprecision(1) << std::fixed << static_cast<double>(_input.c_str()[0]) << std::endl;
	else
	{
		char *endPtr = nullptr;
		double result = strtod(_input.c_str(), &endPtr);
		if (errno == ERANGE && (result == -HUGE_VAL || result == HUGE_VAL))
			std::cout << "impossible :c" << std::endl;
		else std::cout << std::setprecision(1) << std::fixed << result << std::endl;
	}
}
