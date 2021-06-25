// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/25 19:22:58 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/26 00:22:16 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sed.hpp"

int	main(int ac, char **av)
{
	Sed fstm;

	if (ac == 4)
	{
		fstm.setFilename(av[1]);
		fstm.setS1(av[2]);
		fstm.setS2(av[3]);
		fstm.replace();
	}
}
