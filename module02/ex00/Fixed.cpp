// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/01 19:24:51 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/01 19:57:52 by jiglesia         ###   ########.fr       //
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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw * (1 << this->_fbit);
}

int	Fixed::getRawBits(void) const
{
	return (this->_nb / (1 << this->_fbit));
}

Fixed&	Fixed::operator=(Fixed const & src)
{
	std::cout << "Assignation operatior called" << std::endl;
	this->_nb = src.getRawBits();
	return *this;
}
