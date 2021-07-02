// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/01 19:24:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/02 13:32:45 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const a)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = a * (1 << this->_fbit);
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(f * (float)(1 << this->_fbit));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Assignation operatior called" << std::endl;
	if (this != &src)
		this->_nb = src.toFloat() * (1 << this->_fbit);
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & nb)
{
	o << nb.toFloat();
	return o;
}
