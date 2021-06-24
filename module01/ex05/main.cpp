// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/23 19:28:48 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/24 22:22:44 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int	main(void)
{
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}
