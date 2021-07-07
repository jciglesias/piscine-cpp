// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/07 12:34:28 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/07 14:53:48 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n) : _name(n), _hpoints(10), _epoints(10), _damage(0)
{
	std::cout << "Constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Desctructor has been called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	if (this->_epoints)
	{
		std::cout << "Claptrap <" << this->_name << "> attacks <" << target;
		std::cout << ">, causing " << this->_damage << " points of damage!" << std::endl;
		this->_epoints--;
	}
	else
	{
		std::cout << "Claptrap <" << this->_name;
		std::cout << "> has no energy to attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hpoints > 0)
		this->_hpoints -= (int)amount;
	if (this->_hpoints < 0)
		this->_hpoints = 0;
	if (this->_hpoints <= 0)
	{
		std::cout << "ClapTrap <" << this->_name << "> took ";
		std::cout << amount << " damage and now is dead" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap <" << this->_name << "> took ";
		std::cout << amount << " damage" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hpoints += (int)amount;
	std::cout << "ClapTrap <" << this->_name << "> recovered ";
	std::cout << amount << " hitpoints" << std::endl;
}
