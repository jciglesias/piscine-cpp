// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/30 06:10:37 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/30 07:38:09 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

class Span
{
public:
	class SpanFullException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("Span is full");
			}
	};
	class TooSmallException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("not enough items on Span");
			}
	};
	Span(unsigned int n);
	~Span();
	void addNumber(int num);
	int shortestSpan() const;
	int longestSpan() const;
	template<typename T>
	void addContainer(T & cont)
		{
			unsigned int i = _vec.size();
			if ((_size - i) < cont.size())
				throw Span::SpanFullException();
			for (unsigned int j = 0; j < cont.size(); j++)
				_vec.push_back(cont[j]);
		}
private:
	std::vector<int> _vec;
	unsigned int _size;
};


#endif
