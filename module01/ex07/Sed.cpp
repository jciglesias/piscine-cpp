// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sed.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/26 00:22:23 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/26 19:22:04 by jiglesia         ###   ########.fr       //
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
	std::string::size_type	found;

	while (std::getline(ifs, tmp))
	{
		if ((found = tmp.find(this->_s1)) != std::string::npos)
		{
			tmp.replace(found, this->_s1.length(), this->_s2);
			while ((found = tmp.find(this->_s1, found + this->_s2.length())) != std::string::npos)
				tmp.replace(found, this->_s1.length(), this->_s2);
		}
		ofs << tmp << std::endl;
	}
}
