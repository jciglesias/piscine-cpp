// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:26:01 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/18 13:21:52 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{}

Dog::~Dog(void)
{}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof Woof..." << std::endl;
}
