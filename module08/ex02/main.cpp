// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/30 09:37:41 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/30 11:02:05 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "MutantStack.hpp"
#include <iostream>
#include <ctime>

int main()
{
	MutantStack<int> a;
	a.push(5);
	a.push(17);
	std::cout << "mutantstack top:\t" << a.top() << std::endl;
	a.pop();
	std::cout << "mutantstack size:\t" << a.size() << std::endl;
	a.push(3);
	a.push(5);
	a.push(737);
	std::srand(time(0));
	for (int y = 0; y < 10; y++)
		a.push(std::rand());
	a.push(0);
	MutantStack<int>::iterator i = a.begin();
	MutantStack<int>::iterator j = a.end();
	i++;
	j--;
	std::cout << "missing first and last: | ";
	while (i != j)
	{
		std::cout << *i << " | ";
		i++;
	}
	std::cout << std::endl;
	int x = 0;
	std::cout << "the whole stack: | ";
	while (x < a.size())
		std::cout << a[x++] << " | ";
	std::cout << std::endl;
	std::stack<int> s(a);
}
