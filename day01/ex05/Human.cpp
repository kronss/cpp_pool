// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/16 17:39:31 by ochayche          #+#    #+#             //
//   Updated: 2017/09/16 17:39:32 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human()
{
	std::cout << "Human created" << std::endl;
}

Human::~Human()
{
	std::cout << "Human destroyed" << std::endl;	
}

std::string Human::identify()
{
	return (this->_brain.identify());
}

Brain Human::getBrain()
{
	return (this->_brain);
}
