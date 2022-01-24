/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:00:47 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/19 15:17:36 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(int const param)
{
	this->value = param << this->n_bits;
}

Fixed::Fixed(float const param)
{
	this->value = (int)(roundf)(param * (1 << this->n_bits));
}

Fixed::~Fixed()
{

}

Fixed::Fixed(const Fixed& origin)
{
	*this = origin;
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed& Fixed::operator=(const Fixed& origin)
{
	if (this == &origin)
		return (*this);
	value = origin.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed& origin) const
{
	return (this->value > origin.getRawBits());
}

bool Fixed::operator<(const Fixed& origin) const
{
	return (this->value < origin.getRawBits());
}

bool Fixed::operator>=(const Fixed& origin) const
{
	return (this->value >= origin.getRawBits());
}


bool Fixed::operator<=(const Fixed& origin) const
{
	return (this->value <= origin.getRawBits());
}

bool Fixed::operator==(const Fixed& origin) const
{
	return (this->value == origin.getRawBits());
}

bool Fixed::operator!=(const Fixed& origin) const
{
	return (this->value != origin.getRawBits());
}

/* *-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-* */

Fixed Fixed::operator+(const Fixed& origin) const
{
	Fixed temp = *this;
	temp.setRawBits(this->value + origin.getRawBits());
	return (temp);
}

Fixed Fixed::operator-(const Fixed& origin) const
{
	Fixed temp = *this;
	temp.setRawBits(this->value - origin.getRawBits());
	return (temp);
}

Fixed Fixed::operator*(const Fixed& origin) const
{
	Fixed temp = *this;
	temp.setRawBits((this->value * origin.getRawBits()) >> this->n_bits);
	return (temp);
}

Fixed Fixed::operator/(const Fixed& origin) const
{
	Fixed temp = *this;
	temp.setRawBits((this->value << this->n_bits) / origin.getRawBits());
	return (temp);
}

/* *-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-*-_-_-_-_-* */

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.setRawBits(this->value--);
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.setRawBits(this->value++);
	return (temp);
}

Fixed& Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a <= b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a >= b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream &out, const Fixed& origin)
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
