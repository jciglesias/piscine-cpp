// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/22 14:39:40 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/25 12:17:05 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

Form::Form() : _name("new_form"), _sign_grade(150), _exec_grade(150), _sign(0)
{
	std::cout << "An empty form was created" << std::endl;
}

Form::Form(std::string name, int s_grade, int e_grade) : _name(name), _sign_grade(s_grade),
												   _exec_grade(e_grade), _sign(0)
{
	if (s_grade < 1 || e_grade < 1)
		throw Form::GradeTooHighException();
	if (s_grade > 150 || e_grade > 150)
		throw Form::GradeTooLowException();
	std::cout << name << " form was created" << std::endl;
}

Form::Form(Form const & src) : _name(src.getName()), _sign_grade(src.getSGrade()),
							   _exec_grade(src.getEGrade()), _sign(src.getSign())
{
	std::cout << _name << " form copied" << std::endl;
}

Form::~Form()
{
	std::cout << _name << " form destroyed" << std::endl;
}

std::string	Form::getName() const
{
	return _name;
}

int Form::getSGrade() const
{
	return _sign_grade;
}

int Form::getEGrade() const
{
	return _exec_grade;
}

bool Form::getSign() const
{
	return _sign;
}

void Form::checkPermission(Bureaucrat const & src, char type) const
{
	if ((type == 'e' && src.getGrade() > _exec_grade) || (type == 's' && src.getGrade() > _sign_grade))
		throw Form::GradeTooLowException();
}

void Form::checkSign() const
{
	if (_sign == 0)
		throw Form::SignException();
}

void Form::beSigned(Bureaucrat const & src)
{
	if (src.getGrade() > _sign_grade)
		throw Form::GradeTooLowException();
	_sign = 1;
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
	if (src.getSign())
		o << src.getName() << " form is signed";
	else
		o << src.getName() << " form is not signed";
	return o;
}
