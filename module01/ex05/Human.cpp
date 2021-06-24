// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/24 21:42:21 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/24 22:33:05 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human(void)
{}

Human::~Human(void)
{}

Brain&	Human::getBrain(void)
{
	return this->brain;
}

std::string	Human::identify(void) const
{
	return this->brain.identify();
}
