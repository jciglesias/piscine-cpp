// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   DiamondTrap.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/08 18:43:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 01:14:54 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(std::string n);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap(void);
	void attack(std::string const & n);
	//void takeDamage(unsigned int amount);
	//void beRepaired(unsigned int amount);
	//void highFivesGuys(void);
protected:
	std::string	_name;
	std::string	_type;
	int			_hpoints;
	int			_epoints;
	int			_damage;
};

#endif
