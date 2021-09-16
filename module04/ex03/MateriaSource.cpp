// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MateriaSource.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/14 15:07:41 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/16 15:23:43 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() : msize(0)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "A MateriaSource was created" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->msize; i++)
		delete this->materia[i];
	std::cout << "A MateriaSource was destroyed" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->msize; i++)
	{
		if (type.compare(this->materia[i]->getType()) == 0)
			return this->materia[i]->clone();
	}
	std::cout << type << " materia not found" << std::endl;
	return NULL;
}

void MateriaSource::learnMateria(AMateria *src)
{
	if (this->msize < 4)
		this->materia[this->msize++] = src;
	else
		std::cout << "MateriaSource inventory full" << std::endl;
}
