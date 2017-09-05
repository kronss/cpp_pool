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
