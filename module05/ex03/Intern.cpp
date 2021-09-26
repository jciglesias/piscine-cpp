// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/26 09:10:00 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 10:23:09 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern created" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed" << std::endl;
}

static void presidentialpardon(std::string request)
{
	if (request.compare("presidential pardon") == 0)
		throw Intern::PresidentialPardonException();
}

static void shrubbery(std::string request)
{
	if (request.compare("shrubbery creation") == 0)
		throw Intern::ShrubberyCreationException();
}

static void robotomy(std::string request)
{
	if (request.compare("robotomy request") == 0)
		throw Intern::RobotomyRequestException();
}

Form *Intern::makeForm(std::string request, std::string target)
{
	try
	{
		presidentialpardon(request);
		shrubbery(request);
		robotomy(request);
		std::cout << request << " could not be processed" << std::endl;
		return NULL;
	}
	catch (Intern::PresidentialPardonException & e)
	{
		std::cout << "Intern creates PresidentialPardonForm" << std::endl;
		return e.what(target);
	}
	catch (Intern::RobotomyRequestException & e)
	{
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return e.what(target);
	}
	catch (Intern::ShrubberyCreationException & e)
	{
		std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
		return e.what(target);
	}
}
