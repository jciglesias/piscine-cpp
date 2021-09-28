// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/28 17:12:12 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 17:32:34 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "iter.hpp"
#include <iostream>

void intsqr(int & a)
{
	a *= a;
}

void strlol(std::string & str)
{
	str += "lol";
}

int main()
{
	int arr[4] = {0,1,2,3};
	std::cout << "original array:\t| ";
	for (int i = 0; i < 4; i++)
		std::cout << arr[i] << " | ";
	std::cout << std::endl;
	iter(arr, 4, intsqr);
	std::cout << "squared array:\t| ";
	for (int i = 0; i < 4; i++)
		std::cout << arr[i] << " | ";
	std::cout << std::endl;
	std::string vec[4] = {"test1","test2","test3","test4"};
	std::cout << "original array:\t| ";
	for (int i = 0; i < 4; i++)
		std::cout << vec[i] << " | ";
	std::cout << std::endl;
	iter(vec, 4, strlol);
	std::cout << "loled array:\t| ";
	for (int i = 0; i < 4; i++)
		std::cout << vec[i] << " | ";
	std::cout << std::endl;
}
