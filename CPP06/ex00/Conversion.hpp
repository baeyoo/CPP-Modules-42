#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <iomanip>

#define	Red "\e[0;31m"	
#define	Green "\e[0;32m"
#define	Yellow "\e[0;33m"
#define	Purple "\e[0;35m"	
#define	Cyan "\e[0;36m"
#define Reset "\e[0m"

class Conversion
{
    public:

        Conversion(std::string input);
        Conversion(Conversion const &src);
        Conversion& operator=(Conversion const &src);
        ~Conversion();

		//input check
        bool check_int();
        bool check_float();
        bool check_double();
        bool check_char();
        bool check_input();

		//conversion
		void toChar();
		void toInt();
		void toFloat();
		void toDouble();

    private:

        std::string _input;
};

#endif