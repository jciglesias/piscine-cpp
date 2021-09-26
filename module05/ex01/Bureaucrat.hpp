// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/22 07:47:02 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/23 12:08:30 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("Grade too high, highest = 1");
			}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("Grade too low, lowest = 150");
			}
	};
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form & src) const;
private:
	const std::string _name;
	int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);

#endif
