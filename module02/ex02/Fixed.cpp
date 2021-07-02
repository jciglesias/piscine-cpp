// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/01 19:24:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/02 21:05:21 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	//d::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	//d::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const a)
{
	//d::cout << "Int constructor called" << std::endl;
	this->_nb = a * (1 << this->_fbit);
}

Fixed::Fixed(float const f)
{
	//d::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(f * (float)(1 << this->_fbit));
}

Fixed::~Fixed(void)
{
	//d::cout << "Destructor called" << std::endl;
}

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
	//d::cout << "Assignation operatior called" << std::endl;
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
