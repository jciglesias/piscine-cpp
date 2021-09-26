// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/23 13:43:20 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 08:50:06 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	class ShrubberyException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("ShrubberyCreationForm failed");
			}
	};
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;
private:
	std::string _target;
};

#endif
