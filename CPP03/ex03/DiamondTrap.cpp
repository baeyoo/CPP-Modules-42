/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:58:37 by mobrycki          #+#    #+#             */
/*   Updated: 2021/12/06 18:45:40 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = "diamondDefault";
	ClapTrap::_energyPoint = ScavTrap::_energyPoint;
	std::cout << "Default constructor of DiamondTrap " << _name << " has been called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	ClapTrap::_energyPoint = ScavTrap::_energyPoint;
	std::cout << "Constructor of DiamondTrap " << _name << " has been called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src)
{
	std::cout << "Copy constructor of DiamondTrap " << _name << " has been called!" << std::endl;
	*this = src;
}

// _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Distruttore _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap " << _name << " has been called!" << std::endl;
}

// _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Overloads _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

DiamondTrap &	DiamondTrap::operator = ( DiamondTrap const & rhs )
{
	if (this != &rhs)
	{
		_hitPoints = rhs._hitPoints;
		_energyPoint = rhs._energyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

// _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Metodi _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
	std::cout << "I am " << _name << " , the grandson of " << ClapTrap::_name << std::endl;
}
