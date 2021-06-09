// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/09 13:44:39 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/09 14:12:02 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void	print_caps(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << (char)(str[i] - 32);
		else
			std::cout << str[i];
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			print_caps(argv[i]);
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return 0;
}
