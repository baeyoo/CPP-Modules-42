/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:15:26 by mobrycki          #+#    #+#             */
/*   Updated: 2021/12/06 17:23:15 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_hitPoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "Default constructor of FragTrap " << _name << "has been called! " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "Constructor of FragTrap " << _name << " has been called! " << std::endl;
}

FragTrap::FragTrap(const FragTrap & src)
{
	std::cout << "Copy constructor of FragTrap " << _name << " has been called! " << std::endl;
	*this = src;
}

// /--------------------------------/ Destructor /--------------------------------/

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap " << _name << " has been called!" << std::endl;
}

// /--------------------------------/ Overloads /--------------------------------/

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

/*void	FragTrap::attack(std::string const & target) const
{
	std::cout << "FragTrap " << _name << " attack " << target << " dealing " 
		<< _attackDamage << " points of damage!" << std::endl;
}*/

void	FragTrap::highFiveGuys(void) const
{
	std::cout << "FragTrap " << _name << " wants to high five :D " << std::endl;
}
