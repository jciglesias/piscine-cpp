// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/16 18:58:04 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/16 19:00:06 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

void memoryLeak()
{
	std::string	*panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

int main()
{
	memoryLeak();
	return 0;
}
