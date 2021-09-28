// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/28 12:06:25 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 12:52:54 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main(int ac, char **av)
{
	Data *ptr;

	for (int i = 1; i < ac; i++)
	{
		ptr = new Data(av[i]);
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Original address:\t" << ptr << std::endl;
		std::cout << "Original data:\t\t" << ptr->data << std::endl;
		uintptr_t serial;
		serial = serialize(ptr);
		std::cout << "Serialized address:\t" << serial << std::endl;
		Data *des;
		des = deserialize(serial);
		std::cout << "Desirialized address:\t" << des << std::endl;
		std::cout << "Desirialized data:\t" << des->data << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		delete ptr;
	}
	return 0;
}
