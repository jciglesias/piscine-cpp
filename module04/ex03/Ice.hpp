// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ice.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/11 20:21:12 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/15 14:25:24 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(Ice const & src);
	~Ice(void);
	AMateria *clone(void) const;
	void use(ICharacter & target);
};

#endif
