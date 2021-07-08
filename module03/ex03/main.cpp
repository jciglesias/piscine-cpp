// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/07 12:35:27 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 01:09:41 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap clap("John");
	ScavTrap	ninja("Serena");
	std::string	skag = "skag";

	clap.attack(skag);
	clap.takeDamage(10);
	clap.beRepaired(20);
	clap.highFivesGuys();
	return 0;
}
