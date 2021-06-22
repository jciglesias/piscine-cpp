// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/22 19:36:29 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/22 21:36:21 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(void)
{}

Zombie::~Zombie(void)
{}

Zombie::Zombie(std::string n, std::string t) : name(n), type(t)
{}

void	Zombie::announce() const
{
	std::cout << "<" << this->name << " (" << this->type << ")>";
	std::cout << " Braiiiinnnnssssss..." << std::endl;
}
