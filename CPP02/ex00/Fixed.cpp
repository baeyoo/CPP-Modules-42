/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:29:29 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/19 12:47:06 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called!" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called!" << std::endl;
}


Fixed::Fixed(const Fixed& origin)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = origin;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called!" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called!" << std::endl;
	this->value = raw;
}

Fixed& Fixed::operator=(const Fixed& origin)
{
	std::cout << "Assegnation operator called!" << std::endl;
	if (this == &origin)
		return (*this);
	value = origin.getRawBits();
	return (*this);
}