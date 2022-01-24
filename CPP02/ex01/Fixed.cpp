/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:35:18 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/18 16:35:37 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called!" << std::endl;
	this->value = 0;
}

Fixed::Fixed(int const param)
{
	std::cout << "Int constructor called!" << std::endl;
	this->value = param << this->n_bits;
}

Fixed::Fixed(float const param)
{
	std::cout << "Float constructor called!" << std::endl;
	this->value = (int)(roundf)(param * (1 << this->n_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called!" << std::endl;
}

Fixed::Fixed(const Fixed& origin)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = origin;
}

int Fixed::getRawBits( void ) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called!" << std::endl;
	this->value = raw;
}

Fixed& Fixed::operator=(const Fixed& origin)
{
	std::cout << "Assignation operator called!" << std::endl;
	if (this == &origin)
		return (*this);
	value = origin.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& origin)
{
	out << origin.toFloat();
	return (out);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value / (1 << this->n_bits));
}

int Fixed::toInt( void ) const
{
	return (this->value >> this->n_bits);
}
