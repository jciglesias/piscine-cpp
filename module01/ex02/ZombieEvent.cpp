// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/22 19:26:30 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/22 20:28:41 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){}

ZombieEvent::~ZombieEvent(void){}

void	ZombieEvent::setZombieType(std::string type)
{
	this->zombietype = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*newzombie = new Zombie(name, this->zombietype);

	return (newzombie);
}
