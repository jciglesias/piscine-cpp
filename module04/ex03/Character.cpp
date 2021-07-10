// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 20:20:12 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 21:22:35 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character(void) : name("noname"), msize(0)
{
	str::cout << "A no name character was created" << std::endl;
}

Character::Character(std::string n) : name(n), msize(0)
{
	std::cout << "The character " << n << " was created" << std::endl;
}

Character::~Character(void)
{
	std::cout << "The character " << n << " was destroyed" << std::endl;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (this->msize < 4)
		this->materia[this->msize++] = m;
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= (this->msize - 1))
		this->materia[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= (this->msize - 1))
	{
		std::cout << "The character " << this->name << " " << std::endl;
		this->materia[idx]->use(target);
	}
}
