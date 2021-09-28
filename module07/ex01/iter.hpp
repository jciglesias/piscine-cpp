// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/28 17:03:42 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 17:21:43 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void iter(T *arr, int const & n, void f(T & t))
{
	for (int i = 0; i < n; i++)
	{
		f(arr[i]);
	}
}

#endif
