// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/22 19:41:37 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/22 21:42:42 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

void stackzombie(std::string name)
{
	Zombie zombie = Zombie(name, "stack");

	zombie.announce();
}
void	randomzombie(int n)
{
	if (n == 0)
		stackzombie("Juan");
	else if (n == 1)
		stackzombie("Carlos");
	else if (n == 2)
		stackzombie("Alejandra");
	else if (n == 3)
		stackzombie("Maria");
	else if (n == 4)
		stackzombie("Andre");
	else
		stackzombie("Sofia");
}

void	heapzombie(std::string name)
{
	Zombie		*zombie;
	ZombieEvent	event;

	event.setZombieType("heap");
	zombie = event.newZombie(name);
	zombie->announce();
	delete zombie;
}

void createzombie(void)
{
	std::string	name;

	std::cout << "Name of zombie: ";
	std::getline(std::cin, name);
	if (name.compare("random") == 0)
		randomzombie(std::rand() % 5);
	else
		heapzombie(name);
}

int	main(void)
{
	std::string yesno;

	while (yesno.compare("no"))
	{
		std::cout << "New zombie? [yes/no]: ";
		std::getline(std::cin, yesno);
		if (yesno.compare("yes") == 0)
			createzombie();
		if (std::cin.eof() == 1)
			break ;
	}
	return (0);
}
