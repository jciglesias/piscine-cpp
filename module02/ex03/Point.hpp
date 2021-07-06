// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Point.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/02 23:45:55 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/06 18:28:29 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
public:
	Point(void);
	Point(Point const & p);
	Point(float const x, float const y);
	~Point(void);
	Fixed getX(void) const;
	Fixed getY(void) const;
	Fixed det(Point const p) const;
	Point & operator=(Point const & p);
private:
	Fixed const _x;
	Fixed const _y;
};

#endif
