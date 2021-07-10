// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongAnimal.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:21:26 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 21:57:57 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{}

WrongAnimal::~WrongAnimal(void)
{}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}
