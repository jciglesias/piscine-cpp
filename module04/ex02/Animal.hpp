// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Animal.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:11:43 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 14:42:37 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
public:
	Animal(void);
	virtual ~Animal(void);
	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
protected:
	std::string	type;
};

#endif
