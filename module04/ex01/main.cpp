// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:32:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/18 15:16:08 by jiglesia         ###   ########.fr       //
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
		const Dog	*dog = new Dog();
		const Dog cpy(*dog);

		cpy.makeSound();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();//will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << "delete Animal meta: ";
		delete meta;
		std::cout << "delete Animal j: ";
		delete j;
		std::cout << "delete Animal i: ";
		delete i;
		std::cout << "delete Dog dog: ";
		delete dog;
		std::cout << "delete Dog cpy: ";
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
