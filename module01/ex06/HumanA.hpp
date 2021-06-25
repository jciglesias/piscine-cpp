// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/25 15:01:04 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/25 17:20:01 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon&		weapon;
	std::string	name;

public:
	HumanA(std::string n, Weapon& w);
	~HumanA(void);
	void attack(void) const;
};

#endif
