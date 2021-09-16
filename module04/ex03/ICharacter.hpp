// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ICharacter.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 18:05:17 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/14 08:59:25 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <string>

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
