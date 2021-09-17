// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongAnimal.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:21:26 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/17 13:47:02 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{}

WrongAnimal::~WrongAnimal(void)
{}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}
