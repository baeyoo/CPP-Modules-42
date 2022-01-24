/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:35:22 by mobrycki          #+#    #+#             */
/*   Updated: 2021/12/06 18:34:01 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap uno("Toby");
	ClapTrap due("Bobby");

	std::cout << std::endl;
	uno.attack("Bobby");
	uno.takeDamage(8);
	uno.beRepaired(3);
	due.attack("Toby");
	uno.takeDamage(7);
	uno.beRepaired(4);
	std::cout << std::endl;
}
