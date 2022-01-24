/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:48:58 by mobrycki          #+#    #+#             */
/*   Updated: 2021/11/16 19:11:10 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed gf(Point const a, Point const b, Point const d)
{
	return (d.getX() - a.getX()) * (b.getY() - a.getY()) - (d.getY() - a.getY()) * (b.getX() - a.getX());
}

bool f(Point const a, Point const b, Point const c, Point const d)
{
	 return (gf(a, b, c) * gf(a, b, d) > 0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "˚ · • . ° . ˚ · • . ° ." << std::endl;
	std::cout << "Is this point inside the triangle?" << std::endl;
	if(f(a, b, c, point) && f(b, c, a, point) && f(c, a, b, point))
		return (true);
	return (false);
}

/* float sign (fPoint p1, fPoint p2, fPoint p3)
{
    return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

bool PointInTriangle (fPoint pt, fPoint v1, fPoint v2, fPoint v3)
{
    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(pt, v1, v2);
    d2 = sign(pt, v2, v3);
    d3 = sign(pt, v3, v1);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
 */