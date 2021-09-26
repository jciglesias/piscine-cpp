// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/22 09:31:11 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/26 12:27:27 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"

int main()
{
	Intern theintern;
	Bureaucrat officer1("officer1", 150);
	Bureaucrat officer2("officer2", 75);
	Bureaucrat officer3("officer3", 1);
	Form *b1;
	Form *b2;
	Form *b3;

	b1 = theintern.makeForm("shrubbery creation", "Bender");
	b2 = theintern.makeForm("robotomy request", "Bender");
	b3 = theintern.makeForm("presidential pardon", "Bender");
	std::cout << "<<" << *b1 << ">>" << std::endl;
	std::cout << "<<" << *b2 << ">>" << std::endl;
	std::cout << "<<" << *b3 << ">>" << std::endl;
	officer1.signForm(*b1);
	officer1.signForm(*b2);
	officer1.signForm(*b3);
	officer2.signForm(*b1);
	officer2.signForm(*b2);
	officer2.signForm(*b3);
	officer3.signForm(*b1);
	officer3.signForm(*b2);
	officer3.signForm(*b3);
	officer1.executeForm(*b1);
	officer1.executeForm(*b2);
	officer1.executeForm(*b3);
	officer2.executeForm(*b1);
	officer2.executeForm(*b2);
	officer2.executeForm(*b3);
	officer3.executeForm(*b1);
	officer3.executeForm(*b2);
	officer3.executeForm(*b3);
	delete b1;
	delete b2;
	delete b3;
	return 0;
}
