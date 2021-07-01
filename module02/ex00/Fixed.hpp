// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/01 19:16:12 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/01 19:58:07 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);
	void setRawBits(int const raw);
	int getRawBits(void) const;
	Fixed& operator=(Fixed const & src);

private:
	int					_nb;
	static const int	_fbit = 8;
};

#endif
