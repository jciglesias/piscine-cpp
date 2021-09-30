// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/30 05:07:47 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/30 05:44:41 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "easyfind.hpp"
#include <array>
#include <iostream>
#include <vector>

int main()
{
	std::array<int, 4> arr = {0, 1, 2, 3};
	int tmp[] = {-2, -1, 0, 1, 2};
	std::vector<int> vec(tmp, tmp+5);

	std::cout << "Array:" << std::endl;
	for (int x = 0; x < 4; x++)
		std::cout << "| " << arr[x] << " |" << std::endl;
	for (int j = -9; j < 10; j++)
	{
		try
		{
			std::array<int, 4>::iterator i = easyfind(arr, j);
			std::cout << "occurrence found: " << *i << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "ocurrence not found: " << j << std::endl;
		}
	}
	std::cout << "Vector:" << std::endl;
	for (int y = 0; y < 4; y++)
		std::cout << "| " << vec[y] << " |" << std::endl;
	for (int a = -9; a < 10; a++)
	{
		try
		{
			std::vector<int>::iterator b = easyfind(vec, a);
			std::cout << "occurrence found: " << *b << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "ocurrence not found: " << a << std::endl;
		}
	}
	return 0;
}
