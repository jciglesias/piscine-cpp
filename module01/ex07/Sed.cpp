// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sed.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/26 00:22:23 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/26 01:20:08 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sed.hpp"

Sed::Sed(void)
{}

Sed::~Sed(void)
{}

void Sed::setFilename(std::string f)
{
	this->_filename = f;
}

void Sed::setS1(std::string s)
{
	this->_s1 = s;
}

void	Sed::setS2(std::string s)
{
	this->_s2 = s;
}

void	Sed::replace(void) const
{
	std::ifstream	ifs(this->_filename);
	std::string		tmp = this->_filename + ".replace";
	std::ofstream	ofs(tmp);

	while (ifs.eof() == 0)
	{
		ifs >> tmp;
		if (tmp.compare(this->_s1) == 0)
			ofs << this->_s2;
		else if (tmp.empty())
			ofs << "\n";
		else
			ofs << tmp;
	}
}
