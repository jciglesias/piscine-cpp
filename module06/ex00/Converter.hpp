// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Converter.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/09/27 18:26:01 by jiglesia          #+#    #+#             //
//   Updated: 2021/09/27 18:53:31 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <iostream>
# include <exception>

class Converter
{
public:
	class CharException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("non printable char");
			}
	};
	class ImpossibleException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("impossible");
			}
	};
	class NinfException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("-inf");
			}
	};
	class InfException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("+inf");
			}
	};
	class NanException : public std::exception
	{
	public:
		const char *what() const throw()
			{
				return ("nan");
			}
	};
	Converter();
	Converter(std::string str);
	~Converter();
	void setStr(std::string str);
	char toChar() const;
	int toInt() const;
	float toFloat() const;
	double toDouble() const;
private:
	std::string _str;
};

#endif
