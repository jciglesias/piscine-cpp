// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/30 06:35:58 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/30 07:18:30 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

Span::Span(unsigned int n) : _size(n)
{
	_vec.reserve(n);
}

Span::~Span(){}

void Span::addNumber(int num)
{
	if (_vec.size() == _size)
		throw Span::SpanFullException();
	_vec.push_back(num);
}

int Span::shortestSpan() const
{
	if (_vec.size() < 2)
		throw Span::TooSmallException();
	int dif = _vec[0] - _vec[1];
	if (dif < 0)
		dif *= -1;
	for (unsigned int i = 0; i < _vec.size(); i++)
	{
		for (unsigned int j = i + 1; j < _vec.size(); j++)
		{
			int tmp = _vec[i] - _vec[j];
			if (tmp < 0)
				tmp *= -1;
			if (tmp < dif)
				dif = tmp;
		}
	}
	return dif;
}

int Span::longestSpan() const
{
	if (_vec.size() < 2)
		throw Span::TooSmallException();
	int dif = _vec[0] - _vec[1];
	if (dif < 0)
		dif *= -1;
	for (unsigned int i = 0; i < _vec.size(); i++)
	{
		for (unsigned int j = i + 1; j < _vec.size(); j++)
		{
			int tmp = _vec[i] - _vec[j];
			if (tmp < 0)
				tmp *= -1;
			if (tmp > dif)
				dif = tmp;
		}
	}
	return dif;
}
