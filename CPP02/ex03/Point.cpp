/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:40:52 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/20 17:57:47 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{

}

Point::~Point()
{

}

Point::Point(const Point& origin):x(origin.getX()), y(origin.getY())
{

}

Point::Point(float const newX, float const newY):x(newX), y(newY)
{

}

Fixed const Point::getX() const
{
	return (this->x);
}

Fixed const Point::getY() const
{
	return (this->y);
}

Point& Point::operator=(const Point&)
{
	return (*this);
}
