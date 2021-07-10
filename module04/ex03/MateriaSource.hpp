// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MateriaSource.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 21:09:32 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 21:38:02 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	~MateriaSource(void);
	virtual void learnMateria(AMateria *m);
	virtual AMateria* createMateria(std::string const & type);
protected:
	AMateria	*materia[4];
	int			msize;

};

#endif
