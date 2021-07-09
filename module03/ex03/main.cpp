// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/07 12:35:27 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 19:23:00 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap clap("John");
	//ScavTrap	ninja("Serena");
	std::string	skag = "skag";
	int i=102;
	while (i--)
		clap.attack(skag);
	clap.takeDamage(50);
	clap.beRepaired(20);
	clap.highFivesGuys();
	clap.guardGate();
	clap.whoAmI();
	return 0;
}
