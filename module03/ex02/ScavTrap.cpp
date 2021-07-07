// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/07 15:01:41 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/08 01:11:01 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_type = "ScavTrap";
	_hpoints = 100;
	_epoints = 50;
	_damage = 20;
	std::cout << "the ClapTrap " << this->_name;
	std::cout << " has become a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	_type = "ScavTrap";
	_hpoints = 100;
	_epoints = 50;
	_damage = 20;
	std::cout << "The ClapTrap " << this->_name;
	std::cout << " became a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "the ClapTrap " << this->_name;
	std::cout << " has become a ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	this->_type = "ClapTrap";
	std::cout << "ScavTrap " << this->_name << " has been downgraded";
	std::cout << " to a ClapTrap"<< std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_type << " " << this->_name << " has entered Gate keeper mode." << std::endl;
}
