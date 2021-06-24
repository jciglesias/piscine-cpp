// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/24 21:31:12 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/24 22:33:27 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
private:
	Brain	brain;

public:
	Human();
	~Human();
	Brain& getBrain();
	std::string identify() const;
};

#endif
