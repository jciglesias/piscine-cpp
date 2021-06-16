// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/16 14:15:22 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/16 18:36:19 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony{
private:
	std::string	color;
	int			height;
	std::string type;

public:
	Pony(std::string t, std::string c, int h);
	~Pony();
	void		getinthehole()const;
};

#endif
