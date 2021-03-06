// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/22 09:31:11 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/23 12:47:58 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat player0("player0", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat player1("player1", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat player2("player2", 150);
	Bureaucrat player3("player3", 1);
	try
	{
		player2.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		player3.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << player3;
	return 0;
}
