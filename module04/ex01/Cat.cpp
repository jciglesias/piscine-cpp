// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:26:01 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 13:53:46 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	brain = new Brain();
	std::cout << "A cat was created" << std::endl;
}

Cat::Cat(Cat const & src)
{
	int i = 0;

	type = "Cat";
	brain = new Brain();
	while (i < 100)
	{
		brain->setIdea(src.brain->getIdea(i), i);
		i++;
	}
	std::cout << "A cat was deep copied" << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "A cat was destroyed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau Miau Miau..." << std::endl;
}
