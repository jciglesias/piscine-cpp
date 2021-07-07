// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/07 12:35:27 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/07 14:58:36 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("John");
	std::string	skag = "skag";

	clap.attack(skag);
	clap.takeDamage(10);
	clap.beRepaired(20);
	return 0;
}
