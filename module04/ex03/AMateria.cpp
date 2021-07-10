// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 18:28:59 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 18:38:08 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Materia was created" << std::endl;
}

AMateria::AMateria(std::string const & t) : type(t)
{
	std::cout << "Materia was created" << std::endl;
}

AMateria::AMateria(AMateria const & src) : type(src.getType())
{
	std::cout << "Materia was created" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "Materia was destroyed" << std::endl;
}

std::string const & getType(void) const;
{
	return this->type;
}

virtual void use(ICharacter & target);
{
	std::cout << "Does nothing to " << target.getName() << std::endl;
}
