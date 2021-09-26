// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/24 05:51:54 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 08:52:17 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45),
											 _target("default")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45),
															   _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->checkSign();
		this->checkPermission(executor, 'e');
		std::srand((unsigned int)time(NULL));
		if (std::rand() % 2)
		{
			std::cout << "drilling noise " << _target << " has been succesfully robotomized" << std::endl;
		}
		else
			std::cout << _target << " failed to robotomize" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << " to execute " << this->getName() << std::endl;
		throw Bureaucrat::ExecuteException();
	}
}
