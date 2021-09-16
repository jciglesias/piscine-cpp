// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 18:05:54 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/14 09:17:12 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(std::string name);
	Character(Character const & src);
	~Character();
	std::string const & getName() const;
	int getSize() const;
	AMateria *getMateria(int i) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	Character & operator=(Character const & src);
protected:
	std::string	name;
	AMateria	*materia[4];
	int			msize;
};

#endif
