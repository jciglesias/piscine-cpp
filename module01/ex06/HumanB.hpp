// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/25 16:46:48 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/25 17:08:31 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*weapon;
	std::string	name;

public:
	HumanB(std::string n);
	~HumanB(void);
	void attack(void) const;
	void setWeapon(Weapon& w);
};

#endif
