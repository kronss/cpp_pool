// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/16 17:27:51 by ochayche          #+#    #+#             //
//   Updated: 2017/09/16 17:27:52 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain()
{
	std::ostringstream	convert;
	convert << this;
	this->_adr = convert.str();
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;	
}

std::string Brain::identify() const
{
	return this->_adr;
}
