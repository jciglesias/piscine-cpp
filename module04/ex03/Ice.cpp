// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ice.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 18:39:04 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 20:53:26 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ice.hpp"

Ice::Ice(void) : type("ice")
{
	std::cout << "Ice was created" << std::endl;
}

Ice::Ice(Ice const & src)
{
	*this = src;
	std::cout << "Ice was cloned" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice was destroyed" << std::endl;
}

virtual AMateria Ice::clone(void) const
{
	Ice	tmp(*this);

	return tmp;
}

virtual void Ice::use(ICharacter & target)
{
	std::cout << "shoots an ice bolt at " << target.getName() <<std::endl;
}
