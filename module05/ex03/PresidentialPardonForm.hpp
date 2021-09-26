// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/25 07:17:12 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 09:50:03 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	class PresidentialException : public std::exception
	{
		const char *what() const throw()
			{
				return ("PresintialPardonForm failed");
			}
	};
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
private:
	std::string _target;
};

#endif
