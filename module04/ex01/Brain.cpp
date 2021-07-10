// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 12:21:36 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 13:40:16 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A brain was created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "A brain was destroyed" << std::endl;
}

void	Brain::setIdea(std::string src, int i)
{
	ideas[i] = src;
}

std::string Brain::getIdea(int i) const
{
	return this->ideas[i];
}
