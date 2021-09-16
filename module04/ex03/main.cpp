// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/11 20:04:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/16 16:46:49 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
/*

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << "===========================================\n";
	AMateria *tmp;
	AMateria *ic;
	tmp = src->createMateria("ice");
	ic = tmp;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(src->createMateria("cure"));//
	tmp = src->createMateria("random");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << "===========================================\n";
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->use(0, *bob);
	me->use(2, *bob);
	std::cout << "===========================================\n";
	Character a("A");
	Character b("B");
	tmp = src->createMateria("ice");
	a.equip(tmp);
	b = a;
	tmp = src->createMateria("cure");
	a.equip(tmp);
	a.use(1, *bob);
	b.use(1, *bob);
	std::cout << "===========================================\n";
	delete ic;
	delete bob;
	delete src;
	delete me;
	return 0;
}
*/
