// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   phonebook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/09 14:39:43 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/14 20:10:22 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Book.class.hpp"
#include <limits>

void	add_contact(Book *book, int *i)
{
	if (*i < 8)
	{
		book[*i] = Book(*i);
		(*i)++;
	}
	else
		std::cout << "Max capacity reached\n";
}

void	search_contact(Book *book, int *i)
{
	int	j;
	int	index;

	if (*i > 0)
	{
		j = 0;
		std::cout << "┌───────────────────────────────────────────┐\n";
		std::cout << "|     index|first name| last name|  nickname|\n";
		std::cout << "|-------------------------------------------|" << std::endl;
		while (j < *i)
		{
			book[j].display(j + 1);
			j++;
		}
		std::cout << "└───────────────────────────────────────────┘\n";
		std::cout << "Enter index: ";
		std::cin >> index;
		std::cin.ignore();
		if (std::cin.fail()){
			std::cout << "Wrong index\n";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			return ;
		}
		if (index > 0 && index <= *i)
			book[index - 1].print();
	}
}

int	main()
{
	std::string	cmd;
	Book		book[8];
	int			i;

	i = 0;
	while (cmd.compare("EXIT"))
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			add_contact(book, &i);
		else if (cmd.compare("SEARCH") == 0)
			search_contact(book, &i);
		if (std::cin.eof() == 1)
			break ;
	}
	return 0;
}
