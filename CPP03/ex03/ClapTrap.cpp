/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:35:27 by mobrycki          #+#    #+#             */
/*   Updated: 2021/12/06 18:03:35 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("default"),
	_hitPoints(10),
	_energyPoint(10),
	_attackDamage(0)
{
	std::cout << "Default constructor of ClapTrap " << _name << " has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_name(name),
	_hitPoints(10),
	_energyPoint(10),
	_attackDamage(0)
{
	std::cout << "Constructor of ClapTrap " << _name << " has been called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	std::cout << "Copy constructor has been called on ClapTrap" << _name << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap " << _name << " has been called!" << std::endl;
}

// /--------------------------------/ METODI /--------------------------------/

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " is attacked, the player took " << amount << " points of damage! :(" << std::endl;
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints = _hitPoints - amount; 
	std::cout << "Now he's at "<< _hitPoints << " hitpoints.." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << _name << " is repaired and recovers " << amount << " points of damage! ";
	_hitPoints += amount;
	std::cout << "The player is now at "<< _hitPoints << " hitpoints!" << std::endl;
}

// /--------------------------------/ OVERLOAD /--------------------------------/
											//right hand side
ClapTrap &		ClapTrap::operator = ( ClapTrap const & rhs )
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoint = rhs._energyPoint;
	_attackDamage = rhs._attackDamage;
	return *this;
}
