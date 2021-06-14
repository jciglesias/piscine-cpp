// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Book.class.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/11 19:20:17 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/12 00:03:43 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BOOK_CLASS_HPP
# define BOOK_CLASS_HPP
# include <iostream>
# include <string>

class Book{

public:
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	login;
	std::string	postal;
	std::string	email;
	std::string	phone;
	std::string	bday;
	std::string	favmeal;
	std::string	underwear;
	std::string	darksecret;

	Book(void);
	Book(int index);
	void display(int index)const;
	void print(void)const;
};

#endif
