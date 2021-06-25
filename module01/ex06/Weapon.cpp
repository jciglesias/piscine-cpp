// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/25 14:41:11 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/25 17:14:25 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t)
{}

Weapon::~Weapon(void)
{}

std::string	Weapon::getType(void) const
{
	return this->type;
}

void	Weapon::setType(std::string t)
{
	this->type = t;
}
