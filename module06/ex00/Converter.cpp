// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Converter.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/27 18:50:15 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 08:27:15 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Converter.hpp"

Converter::Converter() : _str("")
{}

Converter::Converter(std::string str) : _str(str)
{}

Converter::~Converter()
{}

void Converter::setStr(std::string str)
{
	_str = str;
}

static bool verifyNum(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.' && str[i] != 'f' && str[i] != '-')
			return false;
	}
	return true;
}

static bool verifyInf(std::string str)
{
	if (str.compare("inf") == 0 || str.compare("+inf") == 0)
		return true;
	return false;
}

static bool verifyNinf(std::string str)
{
	if (str.compare("-inf") == 0)
		return true;
	return false;
}

static bool verifyNan(std::string str)
{
	if (str.compare("nan") == 0)
		return true;
	return false;
}

char Converter::toChar() const
{
	if (verifyNum(_str))
	{
		int i;
		try
		{
			i = this->toInt();
		}
		catch (std::exception & e)
		{
			throw Converter::ImpossibleException();
		}
		if (i < 20 || i > 126)
			throw Converter::CharException();
		return static_cast<char>(i);
	}
	else if (_str.length() > 1)
		throw Converter::ImpossibleException();
	else
		return static_cast<char>(_str[0]);
}

int Converter::toInt() const
{
	if (verifyNum(_str))
	{
		double tmp = std::strtod(_str.c_str(), NULL);
		if (tmp > 2147483647 || tmp < -2147483648)
			throw Converter::ImpossibleException();
		return static_cast<int>(tmp);
	}
	else
		throw Converter::ImpossibleException();
}

float Converter::toFloat() const
{
	if (verifyNum(_str))
		return std::strtof(_str.c_str(), NULL);
	else if (verifyNan(_str))
		throw Converter::NanException();
	else if (verifyInf(_str))
		throw Converter::InfException();
	else if (verifyNinf(_str))
		throw Converter::NinfException();
	else
		throw Converter::ImpossibleException();
}

double Converter::toDouble() const
{
	if (verifyNum(_str))
		return std::strtod(_str.c_str(), NULL);
	else if (verifyNan(_str))
		throw Converter::NanException();
	else if (verifyInf(_str))
		throw Converter::InfException();
	else if (verifyNinf(_str))
		throw Converter::NinfException();
	else
		throw Converter::ImpossibleException();
}
