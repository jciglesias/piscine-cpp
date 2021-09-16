// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/11 20:06:23 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/15 14:43:43 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria();
	std::string const & getType(void) const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter & target);
	AMateria & operator=(AMateria const & src);
protected:
	std::string type;
};

#endif
