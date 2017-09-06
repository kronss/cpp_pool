// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.class.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/05 14:59:52 by ochayche          #+#    #+#             //
//   Updated: 2017/09/05 14:59:52 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "header.hpp"

PhoneBook::PhoneBook( void ) {
	_n = 0;
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	PhoneBook::get_nbr( void ) {
	return (_n);
}

void PhoneBook::addContact( void ) {

	contacts[this->_n].set_data();

	(this->_n) += 1;
}

void PhoneBook::showContact( void ) {

	
	std::cout << std::right << std::setw(10) << "index" << "|";
	std::cout << std::right << std::setw(10) << "first name" << "|";
	std::cout << std::right << std::setw(10) << "last name" << "|";
	std::cout << std::right << std::setw(10) << "nickname" << "|" << std::endl;

	for (register int i = 0; i <= this->_n; ++i)
	{
		// std::cout << 

		/* code */
	}

}

