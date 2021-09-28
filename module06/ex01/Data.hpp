// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Data.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/28 12:32:49 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 12:36:55 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <iostream>

class Data
{
public:
	Data(std::string d);
	~Data();
	std::string data;
};

#endif
