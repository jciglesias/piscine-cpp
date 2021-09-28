// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   conv.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/27 09:47:28 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 12:32:27 by ciglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Converter.hpp"
//#include <stdlib.h>
#include <iomanip>

int main(int ac, char **av)
{
	Converter tmp;

	for (int i = 0; i < ac - 1; i++)
	{
		tmp.setStr((std::string)av[i + 1]);
		std::cout << "<<" << av[i + 1] << ">> equals:" << std::endl;
		std::cout << "char: ";
		try
		{
			std::cout << tmp.toChar() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "int: ";
		try
		{
			std::cout << tmp.toInt() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "float: ";
		try
		{
			std::cout << std::fixed << std::setprecision(1) << tmp.toFloat() << "f" << std::endl;
		}
		catch (Converter::NanException & e)
		{
			std::cout << e.what() << "f" << std::endl;
		}
		catch (Converter::NinfException & e)
		{
			std::cout << e.what() << "f" << std::endl;
		}
		catch (Converter::InfException & e)
		{
			std::cout << e.what() << "f" << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "double: ";
		try
		{
			std::cout << std::fixed << std::setprecision(1) << tmp.toDouble() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
