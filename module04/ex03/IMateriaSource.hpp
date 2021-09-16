// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IMateriaSource.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/13 08:41:44 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/14 15:05:47 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource(){}
	virtual void learnMateria(AMateria *src) = 0;
	virtual AMateria *createMateria(std::string const & type) = 0;
};

#endif
