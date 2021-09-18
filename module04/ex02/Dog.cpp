// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:26:01 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/18 15:31:33 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(Dog const & src) : Animal("Dog")
{
	int i = 0;

	std::cout << "It was deep copied" << std::endl;
	brain = new Brain();
	while (i < 100)
	{
		brain->setIdea(src.brain->getIdea(i), i);
		i++;
	}
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof Woof..." << std::endl;
}
