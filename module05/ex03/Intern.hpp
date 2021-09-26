// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/26 08:57:46 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 10:20:49 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP
# define INTERN_HPP

# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	class PresidentialPardonException : public std::exception
	{
	public:
		Form *what(std::string target) const throw()
			{
				return new PresidentialPardonForm(target);
			}
	};
	class RobotomyRequestException : public std::exception
	{
	public:
		Form *what(std::string target) const throw()
			{
				return new RobotomyRequestForm(target);
			}
	};
	class ShrubberyCreationException : public std::exception
	{
	public:
		Form *what(std::string target) const throw()
			{
				return new ShrubberyCreationForm(target);
			}
	};
	Intern();
	~Intern();
	Form *makeForm(std::string form, std::string target);
};

#endif
