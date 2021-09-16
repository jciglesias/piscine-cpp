// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MateriaSource.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/14 14:46:00 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/14 15:10:26 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	AMateria *createMateria(std::string const & type);
	void learnMateria(AMateria *src);
protected:
	AMateria	*materia[4];
	int			msize;
};

#endif
