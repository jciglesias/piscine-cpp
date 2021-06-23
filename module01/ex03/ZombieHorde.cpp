// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/23 01:25:39 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/23 18:03:29 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

static std::string randomname(int a)
{
	if (a == 0)
		return ("Juan");
	else if (a == 1)
		return ("Carlos");
	else if (a == 2)
		return ("Alejandra");
	else if (a == 3)
		return ("Maria");
	else if (a == 4)
		return ("Andre");
	else
		return ("Sofia");
}

ZombieHorde::ZombieHorde(int n) : size(n)
{
	int		i = 0;
	Zombie	*horde = new Zombie[n];

	while (i < n)
	{
		horde[i].setname(randomname(std::rand() % 5));
		horde[i++].settype("heap");
	}
	this->horde = horde;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->horde;
}

void ZombieHorde::announce(void) const
{
	int	i = 0;

	while (i < this->size)
	{
		this->horde[i++].announce();
	}
}
