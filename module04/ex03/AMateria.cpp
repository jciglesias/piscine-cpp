// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/11 20:12:48 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/15 14:09:23 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AMateria.hpp"

AMateria::AMateria(void) : type(0)
{
	std::cout << "Materia was created" << std::endl;
}

AMateria::AMateria(std::string const & t) : type(t)
{
	std::cout << "Materia was created" << std::endl;
}

AMateria::AMateria(AMateria const & src) : type(src.getType())
{
	std::cout << "Materia was copied" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "Materia was destroyed" << std::endl;
}

std::string const & AMateria::getType(void) const
{
	return this->type;
}

void AMateria::use(ICharacter & target)
{
	std::cout << " uses an " << this->type << " at " << target.getName() << std::endl;
}

AMateria & AMateria::operator=(AMateria const & src)
{
	this->type = src.getType();
	return *this;
}
