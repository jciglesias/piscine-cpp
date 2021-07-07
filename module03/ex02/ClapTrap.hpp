// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/07 12:34:38 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/08 00:50:47 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string n);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
protected:
	std::string	_name;
	std::string	_type;
	int			_hpoints;
	int			_epoints;
	int			_damage;
};

#endif
