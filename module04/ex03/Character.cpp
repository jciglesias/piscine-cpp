// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 20:20:12 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/16 15:29:01 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character() : name("noname"), msize(0)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "A no name character was created" << std::endl;
}

Character::Character(std::string n) : name(n), msize(0)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "The character " << n << " was created" << std::endl;
}

Character::Character(Character const & src)
{
	this->name = src.getName();
	this->msize = src.getSize();
	for (int i = 0; i < msize; i++)
		this->materia[i] = (src.getMateria(i))->clone();
	std::cout << "The character " << getName() << " was copied" << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < this->msize; i++)
		delete this->materia[i];
	std::cout << "The character " << this->name << " was destroyed" << std::endl;
}

int Character::getSize() const
{
	return this->msize;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		std::cout << "Nothing to equip" << std::endl;
	else if (this->msize < 4)
	{
		this->materia[this->msize++] = m;
		std::cout << m->getType() << " was equipped to " << this->name << std::endl;
	}
	else
		std::cout << m->getType() << " couldn't be equipped to " << this->name << std::endl;
}
void Character::unequip(int idx)
{
	if (idx >= 0 && this->msize != 0 && idx <= (this->msize - 1))
	{
		std::cout << this->materia[idx]->getType() << " was unequipped from " << this->name << std::endl;
		this->materia[idx] = 0;
		this->msize--;
		if (idx == this->msize)
			return;
		else
		{
			for (int i = idx; i < this->msize; i++)
				this->materia[i] = this->materia[i + 1];
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->msize)
	{
		std::cout << "The character " << this->name << " ";
		this->materia[idx]->use(target);
	}
}

AMateria *Character::getMateria(int i) const
{
	if (i >= 0 && i < 4)
		return this->materia[i];
	else
		return NULL;
}

Character & Character::operator=(Character const & src)
{
	this->name = src.getName();
	this->msize = src.getSize();
	for (int i = 0; i < msize; i++)
		this->materia[i] = (src.getMateria(i))->clone();
	return *this;
}
