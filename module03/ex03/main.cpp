// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/07 12:35:27 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 19:40:51 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap clap("John");
	std::string	skag = "skag";

	clap.attack(skag);
	clap.takeDamage(50);
	clap.beRepaired(20);
	clap.highFivesGuys();
	clap.guardGate();
	clap.whoAmI();
	return 0;
}
