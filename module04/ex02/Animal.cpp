// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Animal.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:21:26 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 14:26:42 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Animal.hpp"

Animal::Animal(void)
{}

Animal::~Animal(void)
{}

std::string	Animal::getType(void) const
{
	return this->type;
}
