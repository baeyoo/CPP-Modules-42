/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:40:48 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/20 17:59:21 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

class Point 
{
	public:
		Point();
		~Point();
		Point(const Point& origin);
		Point(const float x, const float y);
		Point& operator=(const Point&);
		Fixed const getX() const;
		Fixed const getY() const;
	private:
		Fixed const x;
		Fixed const y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif