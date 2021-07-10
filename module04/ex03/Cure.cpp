// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cure.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 18:53:14 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 20:54:12 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cure.hpp"

Cure::Cure(void) : type("cure")
{
	std::cout << "A cure was created" << std::endl;
}

Cure::Cure(Cure const & src)
{
	*this = src;
	std::cout << "Cure was cloned" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "A cure was destroyed" << std::endl;
}

virtual AMateria Cure::clone(void) const
{
	Cure tmp(*this);

	return tmp;
}

virtual void Cure::use(ICharacter & target)
{
	std::cout << " heals " << target.getName() << "\'s wounds" << std::endl;
}
