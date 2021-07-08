// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   DiamondTrap.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/08 18:47:28 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 01:24:20 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	ClapTrap::_name += "_clap_name";
	_name = "DTrap";
	_type = "DiamondTrap";
	_hpoints = FragTrap::_hpoints;
	_epoints = ScavTrap::_epoints;
	_damage = FragTrap::_damage;
	std::cout << "The ScavTrap and FragTrap have been fusioned and";
	std::cout << " became the DiamondTrap " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string n) : ScavTrap(n), FragTrap(n)
{
	ClapTrap::_name = n + "_clap_name";
	_name = n;
	_type = "DiamondTrap";
	_hpoints = FragTrap::_hpoints;
	_epoints = ScavTrap::_epoints;
	_damage = FragTrap::_damage;
	std::cout << "The ScavTrap and FragTrap have been fused and";
	std::cout << " became the DiamondTrap " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "the DiamondTrap " << this->_name;
	std::cout << " has been cloned" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " has been downgraded";
	std::cout << " to a ClapTrap"<< std::endl;
}

void DiamondTrap::attack(std::string const & n)
{
	ClapTrap::attack(n);
}

//void DiamondTrap::ClapTrap::takeDamage(unsigned int amount){}

//void DiamondTrap::ClapTrap::beRepaired(unsigned int amount){}
