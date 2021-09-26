// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/22 09:31:11 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 12:22:39 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	RobotomyRequestForm paper0("paper0");
	ShrubberyCreationForm paper1("paper1");
	PresidentialPardonForm paper2("paper2");
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
	player2.signForm(paper1);
	player3.signForm(paper0);
	//player3.signForm(paper1);
	player3.signForm(paper2);
	player2.executeForm(paper0);
	//std::cout << paper0 << std::endl;
	player3.executeForm(paper0);
	player3.executeForm(paper1);
	player3.executeForm(paper2);
	return 0;
}
