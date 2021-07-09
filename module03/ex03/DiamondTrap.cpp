// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   DiamondTrap.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/08 18:47:28 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 19:36:04 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	_name = ClapTrap::_name;
	ClapTrap::_name += "_clap_name";
	_type = "DiamondTrap";
	ClapTrap::_epoints = ScavTrap::_epoints;
	std::cout << "The ScavTrap and FragTrap have been fusioned and";
	std::cout << " became the DiamondTrap " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string n) : ScavTrap(n), FragTrap(n)
{
	ClapTrap::_name = n + "_clap_name";
	_name = n;
	_type = "DiamondTrap";
	ClapTrap::_epoints = ScavTrap::_epoints;
	std::cout << "The ScavTrap and FragTrap merged and";
	std::cout << " became the DiamondTrap " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "the DiamondTrap " << this->_name;
	std::cout << " has been cloned" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " was divided into";
	std::cout << " a ScavTrap and a FragTrap"<< std::endl;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << this->_name << " " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const & n)
{
	ScavTrap::attack(n);
}
