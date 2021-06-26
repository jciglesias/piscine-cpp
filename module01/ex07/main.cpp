// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/25 19:22:58 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/26 19:27:26 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sed.hpp"

int	main(int ac, char **av)
{
	Sed fstm;

	if (ac == 4)
	{
		if (av[1][0] == 0 || av[2][0] == 0 || av[3][0] == 0)
			return 0;
		fstm.setFilename(av[1]);
		fstm.setS1(av[2]);
		fstm.setS2(av[3]);
		fstm.replace();
		return 0;
	}
	else
		std::cout << "Bad arguments\n";
	return 1;
}
