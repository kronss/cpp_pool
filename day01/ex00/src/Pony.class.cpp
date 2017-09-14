// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.class.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/14 17:11:23 by ochayche          #+#    #+#             //
//   Updated: 2017/09/14 17:11:24 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "header.hpp"

Pony::Pony(const char *name) : _name(name)
{
	_legs = 4;
	_head = 1;
	std::cout << "Constructor called" << std::endl;
	std::cout << this->_name << " borned" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Destructor called" << std::endl;
	std::cout << this->_name << " died" << std::endl;
}

void	Pony::showFullData()
{
	std::cout << "legs: " << this->_legs <<std::endl;
	std::cout << "head: " << this->_head <<std::endl;
	std::cout << "name: " << this->_name <<std::endl;
}
