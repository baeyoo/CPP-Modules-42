
#include "Conversion.hpp"

int main (int argc, char **argv)
{
    if (argc == 1)
        std::cout << Red << "Zio, manca un argomento :-/" << Reset << std::endl;
    else if (argc != 2)
        std::cout << Red << "Manco a fa cosi però, troppi argomenti! >:v" << Reset << std::endl;
    else
    {
        Conversion conversion(argv[1]);
        if (!conversion.check_input())
		{ 
			std::cout << Red << "Inserisci un argomento valido" << Reset << std::endl;
			return 0;
		}
		conversion.toChar();
		conversion.toInt();
		conversion.toFloat();
		conversion.toDouble();
    }
    return 0;
}
