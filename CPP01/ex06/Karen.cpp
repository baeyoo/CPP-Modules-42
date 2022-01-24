/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:32:55 by mobrycki          #+#    #+#             */
/*   Updated: 2021/11/16 16:53:44 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{

}

//	this identifica un puntatore speciale che contiene l’indirizzo 
//	dell’istanza della classe che ha invocato il metodo

void Karen::complain(std::string level)
{
	int i;

	i = 0;
	void (Karen::*levels[5])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::no_level};
	std::string words[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (level.compare(words[i]) && i < 4)
		i++;
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
		return ;
	}
	(this->*levels[i])();
	while (level.compare(words[++i]) && i < 4)
		(this->*levels[i])();
}
 
void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void Karen::no_level( void )
{

}