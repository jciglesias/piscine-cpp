// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/30 07:15:46 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/30 08:39:35 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"
#include <ctime>
#include <array>

int main()
{
	Span sp = Span(100000);
	sp.addNumber(5);
	try
	{
		sp.shortestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::array<int, 2> arr = {2, 20};
	sp.addContainer(arr);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::vector<int> vec;
	std::srand(time(0));
	for (int i = 0; i < 900; i++)
		vec.push_back(std::rand());
	sp.addContainer(vec);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
