// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cure.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 17:22:36 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/14 18:31:42 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(std::string const & type);
	Cure(Cure const & src);
	~Cure(void);
	virtual AMateria *clone(void) const;
	virtual void use(ICharacter & target);
};

#endif
