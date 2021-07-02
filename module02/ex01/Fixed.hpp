// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/01 19:16:12 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/02 13:32:57 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed(int const src);
	Fixed(float const f);
	~Fixed(void);
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	Fixed& operator=(Fixed const & src);

private:
	int					_nb;
	static const int	_fbit = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & nb);

#endif
