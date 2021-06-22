// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/16 21:32:24 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/22 20:26:58 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	zombietype;

public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
};

#endif
