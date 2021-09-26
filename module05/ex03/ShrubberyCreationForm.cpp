// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/23 13:50:24 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 10:50:39 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destroyed" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->checkSign();
		this->checkPermission(executor, 'e');
		std::ofstream file(_target + "_shrubbery");
		file << "    xxx    xx" << std::endl;
		file << "   xoxxx  xxoo" << std::endl;
		file << "  xxx xxxxx xxx" << std::endl;
		file << " xxxoxx xxoxxxxx" << std::endl;
		file << " xxx xx\\xxx xxxx" << std::endl;
		file << "  xx\\xx\\o\\xx" << std::endl;
		file << "   xo\\ x\\x/x" << std::endl;
		file << "    xo\\  //x" << std::endl;
		file << "      ||@||" << std::endl;
		file << "      |||||" << std::endl;
		file << "      |||@|" << std::endl;
		file << "      |||||" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << " to execute " << this->getName() << std::endl;
		throw Bureaucrat::ExecuteException();
	}
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & src)
{
	if (src.getSign())
		o << src.getName() << " form is signed";
	else
		o << src.getName() << " form is not signed";
	return o;
}
