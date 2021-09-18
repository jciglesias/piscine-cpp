// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/09 21:30:21 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/18 15:00:36 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(Cat const & src);
	~Cat(void);
	void makeSound(void) const;
private:
	Brain *brain;
};

#endif
