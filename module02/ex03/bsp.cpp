// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   bsp.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/03 00:53:39 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/06 18:41:07 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	i;
	Fixed	j;
	Point	vb((b.getX() - a.getX()).toFloat(), (b.getY() - a.getY()).toFloat());
	Point	vc((c.getX() - a.getX()).toFloat(), (c.getY() - a.getY()).toFloat());

	i = (p.det(vc) - a.det(vc)) / vb.det(vc);
	j = (p.det(vb) - a.det(vb)) / vb.det(vc) * (-1);
	if (i > Fixed(0) && j > Fixed(0))
		if ((i + j) < 1)
			return true;
	return false;
}
