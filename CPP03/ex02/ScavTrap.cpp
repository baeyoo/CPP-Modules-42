/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:02:19 by mobrycki          #+#    #+#             */
/*   Updated: 2021/12/06 18:31:48 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_hitPoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "Default constructor of ScavTrap " << _name << " has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "Constructor of ScavTrap " << _name << " has been called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src)
{
	std::cout << "Copy constructor of ScavTrap " << _name << " has been called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap " << _name << " has been called!" << std::endl;
}

// /--------------------------------/ Overload /--------------------------------/

ScavTrap  &	ScavTrap::operator = ( ScavTrap const & rhs )
{
	if (this != &rhs)
	{
		_hitPoints = rhs._hitPoints;
		_energyPoint = rhs._energyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

// /--------------------------------/ Methods /--------------------------------/

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " attack " << target << " dealing "
		<< _attackDamage << " points of damage!" << std::endl;
} 

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode " << std::endl;
}
