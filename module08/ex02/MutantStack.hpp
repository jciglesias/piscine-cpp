// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MutantStack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/30 09:08:55 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/30 10:52:13 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(MutantStack const & src) : std::stack<T>(src) {}
	MutantStack(std::stack<T> const & src) : std::stack<T>(src) {}
	~MutantStack() {}
	T & operator[](int const & i)
		{
			MutantStack<T>::iterator tmp = this->begin();
			for (int j = 0; j < i; j++)
				tmp++;
			return *tmp;
		}
	using std::stack<T>::operator=;
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}
};

#endif
