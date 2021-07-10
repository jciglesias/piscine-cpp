// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongAnimal.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:11:43 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/09 21:56:04 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
public:
	WrongAnimal(void);
	~WrongAnimal(void);
	void makeSound(void) const;
	std::string getType(void) const;
protected:
	std::string	type;
};

#endif
