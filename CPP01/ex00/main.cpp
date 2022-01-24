/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:15:47 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/12 16:28:32 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	Zombie *zombie;
	std::string name;
	
	for (int i = 1; i < argc; i++)
	{
		name = argv[i];
		if (i % 2)
		{
			std::cout << " ZzzZzzzZZZzzzZ: ";
			zombie = newZombie(name);
			zombie->announce();
			delete zombie;
		}
		else
		{
			std::cout << "ZZzzzZzzzzzZzzzZZzzzZzzzzzZzzz: ";
			randomChump(name);
		}
	}
	return (0);
}