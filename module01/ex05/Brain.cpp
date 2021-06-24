// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/24 21:25:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/24 21:49:47 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain(void)
{
	this->iq = std::rand() % 200;
}

Brain::~Brain(void)
{}

std::string	Brain::identify(void) const
{
	std::stringstream 	str;

	str << this;
	return str.str();
}
