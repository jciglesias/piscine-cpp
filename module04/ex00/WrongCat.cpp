// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongCat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:26:01 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 22:03:47 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
}

WrongCat::~WrongCat(void)
{}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miau Miau Miau..." << std::endl;
}
