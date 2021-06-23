// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/23 18:33:44 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/23 18:41:17 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

void	printptr(std::string *ptr)
{
	std::cout << *ptr << std::endl;
}

void	printref(std::string& str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr;

	ptr = &str;
	printptr(ptr);
	printref(str);
	return (0);
}
