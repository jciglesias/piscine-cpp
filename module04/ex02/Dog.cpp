// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:26:01 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 14:45:15 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	brain = new Brain();
	std::cout << "A dog was created" << std::endl;
}

Dog::Dog(Dog const & src)
{
	int i = 0;

	type = "Dog";
	brain = new Brain();
	while (i < 100)
	{
		brain->setIdea(src.brain->getIdea(i), i);
		i++;
	}
	std::cout << "A dog was deep copied" << std::endl;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "A dog was destroyed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof Woof..." << std::endl;
}
