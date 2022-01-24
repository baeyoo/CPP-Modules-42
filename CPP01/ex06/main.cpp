/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:32:50 by mobrycki          #+#    #+#             */
/*   Updated: 2021/11/16 16:46:48 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int error(const char *msg)
{
	std::cout << msg << std::endl;
	return (1);
}

int main(int argc, char *argv[])
{
	Karen Karen;
	std::string level;
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
		return (0);
	}
	level = argv[1];
	Karen.complain(level);

	return (0);
}