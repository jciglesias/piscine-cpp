// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/23 17:55:17 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/23 18:21:53 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

void	createhorde(int size)
{
	ZombieHorde horde = ZombieHorde(size);

	horde.announce();
}

int	main(void)
{
	int	size;
	std::string yesno;

	while (yesno.compare("no"))
	{
		std::cout << "New zombie horde? [yes/no]: ";
		std::getline(std::cin, yesno);
		if (yesno.compare("yes") == 0)
		{
			std::cout << "Horde size: ";
			std::cin >> size;
			std::cin.ignore();
			if (std::cin.fail())
			{
				std::cout << "Wrong size, set to default (0)\n";
				std::cin.clear();
				std::cin.ignore(256, '\n');
				size = 0;
			}
			createhorde(size);
		}
		if (std::cin.eof() == 1)
			break ;
	}
	return (0);
}
