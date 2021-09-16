// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ice.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/12 11:57:41 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/16 14:53:48 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice was cerated" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src)
{
	std::cout << "Ice was cloned" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice was destroyed" << std::endl;
}

AMateria *Ice::clone(void) const
{
	return new Ice();
}


void Ice::use(ICharacter & target)
{
	std::cout << "shoots an ice bolt at " << target.getName() <<std::endl;
}
