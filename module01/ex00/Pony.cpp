// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/16 14:22:06 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/16 18:35:33 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony::Pony(std::string t, std::string c, int h) : type(t), color(c), height(h)
{
	std::cout << "Pony on the " << this->type << " created\n";
}

Pony::~Pony(void)
{
	std::cout << "Pony on the " << this->type << " destroyed\n";
}

void	Pony::getinthehole(void) const
{
	std::cout << "Pony tries to get in the hole of size 200 cm\n";
	if (this->height < 200)
		std::cout << this->color << " pony on the " << this->type << " got in the hole\n";
	else
		std::cout << this->color << " pony on the " << this->type << " can't fit the hole\n";
}
