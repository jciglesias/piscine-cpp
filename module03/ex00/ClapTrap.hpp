// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/07 12:34:38 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/07 14:53:54 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap(std::string n);
	~ClapTrap(void);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	std::string	_name;
	int			_hpoints;
	int			_epoints;
	int			_damage;
};

#endif
