// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/28 16:44:52 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 16:52:07 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T & a, T & b)
{
	T c = a;

	a = b;
	b = c;
}

template<typename T>
T const & min(T const & a, T const & b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T const & max(T const & a, T const & b)
{
	if (a > b)
		return a;
	return b;
}

#endif
