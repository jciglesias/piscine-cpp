// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/16 19:38:42 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/23 17:47:04 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string	name;
	std::string	type;

public:
	Zombie();
	~Zombie();
	Zombie(std::string n, std::string t);
	void setname(std::string n);
	void settype(std::string t);
	void announce() const;
};

#endif
