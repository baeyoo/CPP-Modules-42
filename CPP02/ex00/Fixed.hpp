/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:46:53 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/19 12:46:54 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& origin);
		int	getRawBits(void)const;
		void setRawBits(int const raw);
		Fixed& operator=(const Fixed& origin);
	private:
		int	value;
		static const int n_bits = 8;
};

#endif