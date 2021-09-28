// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Base.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/28 13:14:36 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 13:17:00 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
public:
	virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

#endif
