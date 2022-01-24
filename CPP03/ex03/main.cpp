/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:35:22 by mobrycki          #+#    #+#             */
/*   Updated: 2021/12/06 18:44:50 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
    DiamondTrap mario("Mario");
    std::cout << std::endl;
    mario.whoAmI();
    std::cout << std::endl;
    DiamondTrap bowser("Bowser");
    std::cout << std::endl;
    bowser.whoAmI();
    std::cout << std::endl;
    mario.attack("bowser");
    std::cout << std::endl;
    bowser.takeDamage(30);
    std::cout << std::endl;
    mario.beRepaired(20);
    mario.highFiveGuys();
    std::cout << std::endl;
}
