// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/25 07:22:31 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 09:56:00 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("default")
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destroyed" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->checkSign();
		this->checkPermission(executor, 'e');
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << " to execute " << this->getName() << std::endl;
		throw Bureaucrat::ExecuteException();
	}
}
