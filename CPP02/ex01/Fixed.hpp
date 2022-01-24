/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:28:53 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/18 15:49:08 by mobrycki         ###   ########.fr       */
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
		Fixed& operator=(const Fixed& origin);
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int n_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& origin);

#endif