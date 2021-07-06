// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/01 19:24:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/06 17:34:17 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::Fixed(int const a)
{
	this->_nb = a * (1 << this->_fbit);
}

Fixed::Fixed(float const f)
{
	this->_nb = roundf(f * (float)(1 << this->_fbit));
}

Fixed::~Fixed(void)
{}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw * (1 << this->_fbit);
}

int	Fixed::toInt(void) const
{
	return (this->_nb / (1 << this->_fbit));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_nb / (float)(1 << this->_fbit));
}

Fixed&	Fixed::operator=(Fixed const & src)
{
	if (this != &src)
		this->_nb = src.toFloat() * (1 << this->_fbit);
	return *this;
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed	tmp(this->toFloat() + rhs.toFloat());

	return tmp;
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed	tmp(this->toFloat() - rhs.toFloat());

	return tmp;
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed	tmp(this->toFloat() * rhs.toFloat());

	return tmp;
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed	tmp(this->toFloat() / rhs.toFloat());

	return tmp;
}

Fixed Fixed::operator++()
{
	this->_nb++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed const	tmp(*this);

	++(*this);
	return tmp;
}

Fixed Fixed::operator--()
{
	this->_nb--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed const tmp(*this);

	++(*this);
	return tmp;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return b;
	else
		return a;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return b;
	else
		return a;
}

/*Fixed Fixed::max(Fixed a, Fixed b)
{
	if (a < b)
		return b;
	else
		return a;
}
*/
std::ostream & operator<<(std::ostream & o, Fixed const & nb)
{
	o << nb.toFloat();
	return o;
}
