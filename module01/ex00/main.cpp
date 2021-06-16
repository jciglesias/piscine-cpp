// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/16 14:35:36 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/16 18:48:19 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

void	ponyOnTheStack(std::string c, int h)
{
	Pony	pony = Pony("stack", c, h);

	pony.getinthehole();
}

void	ponyOnTheHeap(std::string c, int h)
{
	Pony	*pony = new Pony("heap", c, h);

	pony->getinthehole();
	delete pony;
}

void	newpony(void)
{
	std::string	ponytype;
	std::string	color;
	int			height;

	std::cout << "Type of pony [heap/stack]: ";
	std::getline(std::cin, ponytype);
	if (ponytype.compare("heap") == 0)
	{
		std::cout << "Color of pony: ";
		std::getline(std::cin, color);
		std::cout << "Height of pony in cm: ";
		std::cin >> height;
		std::cin.ignore();
		if (std::cin.fail())
		{
			std::cout << "Wrong height, set to default (0)\n";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			height = 0;
		}
		ponyOnTheHeap(color, height);
	}
	else if (ponytype.compare("stack") == 0)
	{
		std::cout << "Color of pony: ";
		std::getline(std::cin, color);
		std::cout << "Height of pony in cm: ";
		std::cin >> height;
		std::cin.ignore();
		if (std::cin.fail())
		{
			std::cout << "Wrong height, set to default (0)\n";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			height = 0;
		}
		ponyOnTheStack(color, height);
	}
}

int main(void)
{
	std::string yesno;

	while (yesno.compare("no"))
	{
		std::cout << "New pony? [yes/no]: ";
		std::getline(std::cin, yesno);
		if (yesno.compare("yes") == 0)
			newpony();
		if (std::cin.eof() == 1)
			break ;
	}
	return 0;
}
