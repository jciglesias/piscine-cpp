// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:32:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 13:51:08 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const Dog	dog;
		const Animal* cpy = new Dog(dog);

		cpy->makeSound();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();//will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
		delete cpy;
	}
	{
		const Animal	*animals[10];
		int				i = 0;

		while (i < 5)
			animals[i++] = new Cat();
		while (i < 10)
			animals[i++] = new Dog();
		while (i > 0)
			animals[--i]->makeSound();
		while (i < 10)
			delete animals[i++];
	}
}
