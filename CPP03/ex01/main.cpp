/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:35:22 by mobrycki          #+#    #+#             */
/*   Updated: 2021/12/06 17:11:25 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap uno("Toby");
	ClapTrap due("Mirko");

	std::cout << std::endl;
	uno.attack("Gabriel");
	due.attack("Gabriel");
	uno.takeDamage(4);
	uno.takeDamage(6);
	uno.beRepaired(2);
	uno.guardGate();
	std::cout << std::endl;

	
	/* ClapTrap uno("Toby");
	//ClapTrap due("Bobby");
	uno.attack("Bobby");
	uno.takeDamage(8);
	uno.beRepaired(3);
	due.attack("Toby");
	uno.takeDamage(7);
	uno.beRepaired(4); */ 
}
