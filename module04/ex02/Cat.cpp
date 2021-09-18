// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:26:01 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/18 15:26:03 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(Cat const & src) : Animal("Cat")
{
	int i = 0;

	std::cout << "IA was deep copied" << std::endl;
	brain = new Brain();
	while (i < 100)
	{
		brain->setIdea(src.brain->getIdea(i), i);
		i++;
	}
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau Miau Miau..." << std::endl;
}
