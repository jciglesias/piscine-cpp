// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sed.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/06/26 00:18:24 by jiglesia          #+#    #+#             //
//   Updated: 2021/06/26 00:27:44 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#ifndef SED_HPP
#define SED_HPP

# include <iostream>
# include <string>
# include <fstream>

class Sed
{
private:
	std::string _filename;
	std::string _s1;
	std::string _s2;

public:
	Sed(void);
	~Sed(void);
	void setFilename(std::string f);
	void setS1(std::string s);
	void setS2(std::string s);
	void replace(void) const;
};

#endif
