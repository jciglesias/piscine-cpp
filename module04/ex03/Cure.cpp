// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cure.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 18:53:14 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/16 15:16:07 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "A cure was created" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	std::cout << "Cure was cloned" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "A cure was destroyed" << std::endl;
}

AMateria *Cure::clone(void) const
{
	return new Cure();
}

void Cure::use(ICharacter & target)
{
	std::cout << " heals " << target.getName() << "\'s wounds" << std::endl;
}
