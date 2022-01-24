/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:03:01 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/08 18:03:19 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weaponREF(weapon)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with his " << this->weaponREF.getType() << std::endl;
}
