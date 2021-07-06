// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/01 21:35:11 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/06 18:37:39 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p);

int main(void)
{
	Point a(1.f, 2.f);
	Point b(2.f, 2.f);
	Point c(1.5f, 5.f);
	Point p(1.5f, 4.9f);

	if (bsp(a, b, c, p))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is not inside the triangle" << std::endl;
	return 0;
}
