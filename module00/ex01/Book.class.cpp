// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Book.class.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/11 19:32:12 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/14 01:22:50 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Book.class.hpp"

Book::Book(void){}

static std::string	save_line(void){
	std::string	str;

	std::getline(std::cin, str);
	if (std::cin.eof() == 1)
		exit(0);
	return str;
}

Book::Book(int index){
	if (index < 8)
	{
		std::cout << "First name: ";
		this->f_name = save_line();
		std::cout << "Last name: ";
		this->l_name = save_line();
		std::cout << "Nickname: ";
		this->n_name  = save_line();
		std::cout << "Login: ";
		this->login  = save_line();
		std::cout << "Postal code: ";
		this->postal = save_line();
		std::cout << "Email address: ";
		this->email = save_line();
		std::cout << "Phone number: ";
		this->phone = save_line();
		std::cout << "Birthday date: ";
		this->bday = save_line();
		std::cout << "Favorite meal: ";
		this->favmeal = save_line();
		std::cout << "Underwear color: ";
		this->underwear = save_line();
		std::cout << "Darkest secret: ";
		this->darksecret = save_line();
	}
}

static void	print_line(std::string str){
	int	i;

	if (str.length() == 10)
		std::cout << str << "|";
	else if (str.length() > 10){
		while (str.length() > 9)
			str.pop_back();
		std::cout << str << ".|";
	}
	else {
		i = 10 - str.length();
		while (i--)
			std::cout << " ";
		std::cout << str << "|";
	}
}

void	Book::display(int index)const{
	std::cout <<"|         " << index << "|";
	print_line(this->f_name);
	print_line(this->l_name);
	print_line(this->n_name);
	std::cout << std::endl;
}

void	Book::print(void)const{
	std::cout << "First name: " << this->f_name << std::endl;
	std::cout << "Last name: " << this->l_name << std::endl;
	std::cout << "Nickname: " << this->n_name << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal code: " << this->postal << std::endl;
	std::cout << "Email address: " << this->email << std::endl;
	std::cout << "Phone number: " << this->phone << std::endl;
	std::cout << "Birthday date: " << this->bday << std::endl;
	std::cout << "Favorite meal: " << this->favmeal << std::endl;
	std::cout << "Underwear color: " << this->underwear << std::endl;
	std::cout << "Darkest secret: " << this->darksecret << std::endl;
}
