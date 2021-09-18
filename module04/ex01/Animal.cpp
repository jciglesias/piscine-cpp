// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Animal.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:21:26 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/18 13:21:15 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Animal.hpp"

Animal::Animal(void) : type("animal")
{
	std::cout << "An animal was created" << std::endl;
}

Animal::Animal(std::string t) : type(t)
{
	std::cout << "A " << this->type << " was created" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "A " << this->type << " died" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << this->type << " is making sounds" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->type;
}
