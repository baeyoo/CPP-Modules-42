/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:00:45 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/19 15:22:18 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed 
{
	public:
		Fixed();
		Fixed(const Fixed& origin);
		Fixed(int const param);
		Fixed(float const param);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		bool operator>(const Fixed& origin) const;
		bool operator<(const Fixed& origin) const;
		bool operator>=(const Fixed& origin) const;
		bool operator<=(const Fixed& origin) const;
		bool operator==(const Fixed& origin) const;
		bool operator!=(const Fixed& origin) const;
		Fixed& operator=(const Fixed& origin);
		Fixed operator+(const Fixed& origin) const;
		Fixed operator-(const Fixed& origin) const;
		Fixed operator*(const Fixed& origin) const;
		Fixed operator/(const Fixed& origin) const;
		Fixed operator--(int);
		Fixed& operator--();
		Fixed operator++(int);
		Fixed& operator++();
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(Fixed const & a, Fixed const & b);
		static const Fixed& max(Fixed const & a, Fixed const & b);
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int n_bits = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed& origin);

#endif