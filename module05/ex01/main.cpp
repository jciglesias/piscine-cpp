// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/22 09:31:11 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/23 12:45:15 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat player0("player0", 151);
	}
	catch (std::exception & e)
	{
		std::cout << "player0 could not be created " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat player1("player1", 0);
	}
	catch (std::exception & e)
	{
		std::cout << "player1 could no be created " << e.what() << std::endl;
	}
	Bureaucrat player2("player2", 150);
	Bureaucrat player3("player3", 1);
	Form paper0("paper0", 5, 5);
	try
	{
		player2.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Could no decrement " << e.what() << std::endl;
	}
	try
	{
		player3.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Could no increment " << e.what() << std::endl;
	}
	std::cout << player3 << std::endl << paper0 << std::endl;
	player2.signForm(paper0);
	player3.signForm(paper0);
	std::cout << paper0 << std::endl;
	return 0;
}
