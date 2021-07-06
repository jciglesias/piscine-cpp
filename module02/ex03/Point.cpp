// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Point.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/02 23:51:58 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/06 18:28:36 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{}

Point::Point(Point const & p) : _x(p.getX()), _y(p.getY())
{}

Point::Point(float const x, float const y) : _x(x), _y(y)
{}

Point::~Point(void)
{}

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

Fixed	Point::det(Point const p) const
{
	return ((this->_x * p.getY()) - (this->_y * p.getX()));
}

Point & Point::operator=(Point const & p)
{
	Point tmp(p);

	if (this != &p)
		*this = tmp;
	return *this;
}
