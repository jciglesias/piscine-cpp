// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/28 13:17:24 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 13:42:29 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Base.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

Base *generate(void)
{
	int i = (std::rand() % 3);

	if (!i)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << 'A' << std::endl;
		return ;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << 'B' << std::endl;
		return ;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << 'C' << std::endl;
		return ;
	}
}

void identify(Base & p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << 'A' << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << 'C' << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
}

int main(int ac, char **av)
{
	std::srand((unsigned int)time(NULL));
	if (ac == 2)
	{
		double i = std::strtod(av[1], NULL);
		for (double j = 0; j < i; j++)
		{
			Base *ptr = generate();
			std::cout << "Pointer type: ";
			identify(ptr);
			Base & ref = *ptr;
			std::cout << "Reference type: ";
			identify(ref);
			delete ptr;
		}
	}
}
