// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/07 12:35:27 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/08 01:11:31 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap clap("John");
	std::string	skag = "skag";

	clap.attack(skag);
	clap.takeDamage(10);
	clap.beRepaired(20);
	clap.guardGate();
	return 0;
}
