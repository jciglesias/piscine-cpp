// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/22 13:58:32 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 08:50:35 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("Grade too high");
			}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("Grade too low");
			}
	};
	class SignException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("No sign");
			}
	};
	Form();
	Form(std::string name, int s_grade, int e_grade);
	Form(Form const & src);
	~Form();
	std::string getName() const;
	int getSGrade() const;
	int getEGrade() const;
	bool getSign() const;
	void beSigned(Bureaucrat const & src);
	void checkSign() const;
	void checkPermission(Bureaucrat const & src, char type) const;
	virtual void execute(Bureaucrat const & executor) const = 0;
private:
	const std::string _name;
	const int _sign_grade;
	const int _exec_grade;
	bool _sign;
};

std::ostream & operator<<(std::ostream & o, Form const & src);

#endif
