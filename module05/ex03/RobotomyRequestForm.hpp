// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/24 05:45:16 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 08:49:13 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	class RobotomyRequestFormException : public std::exception
	{
		const char *what() const throw()
			{
				return ("RobotomyRequestForm failed");
			}
	};
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
private:
	std::string _target;
};

#endif
