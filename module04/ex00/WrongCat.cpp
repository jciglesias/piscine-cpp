// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongCat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:26:01 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/17 13:46:34 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat was created";
}

WrongCat::~WrongCat(void)
{}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miau Miau Miau..." << std::endl;
}
