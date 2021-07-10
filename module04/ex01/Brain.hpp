// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: jiglesia <jiglesia@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2021/07/10 12:10:48 by jiglesia          #+#    #+#             //
//   Updated: 2021/07/10 13:40:12 by jiglesia         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
public:
	Brain(void);
	~Brain(void);
	void	setIdea(std::string src, int i);
	std::string getIdea(int i) const;
protected:
	std::string ideas[100];
};

#endif
