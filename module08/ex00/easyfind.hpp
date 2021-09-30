// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/29 15:43:33 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/30 05:22:46 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

template<typename T>
typename T::iterator easyfind(T & cont, int var)
{
	typename T::iterator i = std::find(cont.begin(), cont.end(), var);

	if (i == cont.end() && *cont.end() != var)
		throw std::exception();
	return i;
}

#endif
