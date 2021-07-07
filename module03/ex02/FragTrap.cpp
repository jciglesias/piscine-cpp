// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/08 01:20:37 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/08 01:55:58 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_type = "FragTrap";
	_hpoints = 100;
	_epoints = 100;
	_damage = 30;
	std::cout << "the ClapTrap " << this->_name;
	std::cout << " has become a FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	_type = "FragTrap";
	_hpoints = 100;
	_epoints = 100;
	_damage = 30;
	std::cout << "The ClapTrap " << this->_name;
	std::cout << " became a FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "the ClapTrap " << this->_name;
	std::cout << " has become a FragTrap" << std::endl;
}

FragTrap::~FragTrap(void)
{
	this->_type = "ClapTrap";
	std::cout << "FragTrap " << this->_name << " has been downgraded";
	std::cout << " to a ClapTrap"<< std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_type << " " << this->_name << " requests a high five" << std::endl;
}
