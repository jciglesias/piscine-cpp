// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:26:01 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/18 13:20:22 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{}

Cat::~Cat(void)
{}

void	Cat::makeSound(void) const
{
	std::cout << "Miau Miau Miau..." << std::endl;
}
