/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:03:14 by mobrycki          #+#    #+#             */
/*   Updated: 2021/11/11 15:18:02 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "\0";
}

Zombie::Zombie(std::string name)
{
	setName(name);
}

Zombie::~Zombie( void )
{
	std::cout << this->getName() << " died!" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

std::string	Zombie::getName(void)const
{
	return (this->name);
}

void	Zombie::announce( void ) const
{
	std::cout << this->getName() << " BraiiiiiiiNnnZzzZ..." << std::endl;
}
