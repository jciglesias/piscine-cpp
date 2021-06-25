// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/25 16:49:30 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/25 17:16:00 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n)
{}

HumanB::~HumanB(void)
{
	//if (this->weppon)
	//	delete this->weppon;
}

void	HumanB::setWeapon(Weapon& w)
{
	this->weapon = &w;
}

void	HumanB::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
