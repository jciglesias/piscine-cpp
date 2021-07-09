// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   DiamondTrap.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/08 18:43:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 19:11:39 by jiglesia         ###   ########.fr       //
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
	void whoAmI(void) const;
	void attack(std::string const & n);
private:
	std::string	_name;
};

#endif
