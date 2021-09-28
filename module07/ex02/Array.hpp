// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/28 17:36:00 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/28 18:36:15 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class Array
{
public:
	class OutOfLimitException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("element out of limits");
			}
	};
	Array() : _size(0){}
	Array(unsigned int n) : _size(n), _arr(new T[n]){}
	Array(Array const & src)
		{
			_size = src.size();
			_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = src.getVal(i);
		}
	~Array() {delete [] _arr;}
	unsigned int size() const {return _size;}
	T getVal(unsigned int i) const {return _arr[i];}
	Array & operator=(Array const & src)
		{
			if (_arr)
				delete [] _arr;
			_size = src.size();
			_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = src.getVal(i);
			return *this;
		}
	T & operator[](unsigned int const & i)
		{
			if (i >= _size)
				throw OutOfLimitException();
			return _arr[i];
		}
private:
	T *_arr;
	unsigned int _size;
};

#endif
