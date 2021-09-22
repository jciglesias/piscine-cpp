// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/22 07:47:02 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/22 09:50:09 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <exception>

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
private:
	const std::string _name;
	int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);

#endif
