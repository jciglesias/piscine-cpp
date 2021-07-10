// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MateriaSource.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 21:16:27 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 21:34:06 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : msize(0)
{
	std::cout << "MateriaSource cerated" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	std::cout << "MateriaSource copied" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource cerated" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->msize < 4)
		this->materia[this->msize++] = m;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	int i;
	AMateria *tmp;

	while (i < this->msize)
	{
		if (type.compare(this->materia[i].getType()) == 0)
			tmp = new AMateria(this->materia[i]);
		i++;
	}
	return tmp;
}
