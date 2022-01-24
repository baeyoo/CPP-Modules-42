/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:35:22 by mobrycki          #+#    #+#             */
/*   Updated: 2021/12/06 18:33:39 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap uno("Bryan");
	FragTrap dos("Mike");

	std::cout << std::endl;
	uno.attack("Matti");
	uno.takeDamage(4);
	uno.beRepaired(2);
	uno.guardGate();

	dos.attack("Scooby");
	dos.takeDamage(30);
	dos.beRepaired(20);
	dos.highFiveGuys();
	std::cout << std::endl;
}
