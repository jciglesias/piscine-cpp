// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/25 13:26:39 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/25 17:14:29 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(std::string t);
	~Weapon(void);
	std::string getType(void) const;
	void setType(std::string t);
};

#endif
