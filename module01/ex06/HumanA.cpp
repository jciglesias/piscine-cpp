// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/25 15:09:04 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/25 17:19:32 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w) : name(n), weapon(w)
{}

HumanA::~HumanA(void)
{}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
