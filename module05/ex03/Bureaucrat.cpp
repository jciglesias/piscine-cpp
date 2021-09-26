// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/22 08:28:26 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 08:51:00 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150)
{
	std::cout << "Bureaucrat construtor called empty" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << _name << " bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << _name << " bureaucrat died" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form & src) const
{
	try
	{
		src.beSigned(*this);
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << _name << " cannot sign " << src.getName();
		std::cout << " because he/she doesn't have the authority" << std::endl;
		return ;
	}
	std::cout << _name << " signs " << src.getName() << std::endl;
}

void Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << _name << e.what() << form.getName() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade();
	return o;
}
