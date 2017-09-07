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
	// std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

int	PhoneBook::get_nbr( void ) {
	return (_n);
}

void PhoneBook::addContact( void ) {
	if (this->_n < 8)
	{
		contacts[this->_n].set_data();
		(this->_n) += 1;
	}
	else 
		std::cout << ERRO << "Phone book is full" << DEFT << std::endl;
}

void PhoneBook::showContact( void ) {

	std::cout << std::right << std::setw(10) << "index" << "|";
	std::cout << std::right << std::setw(10) << "first name" << "|";
	std::cout << std::right << std::setw(10) << "last name" << "|";
	std::cout << std::right << std::setw(10) << "nickname" << "|" << std::endl;

	for (register int i = 0; i < this->_n; ++i)
	{
		contacts[i].printInfo(i + 1);
	}

}

void PhoneBook::menageContact( void ) {

	int nbr = 0;
	std::string buf;

	do {
		std::cout << "Please enter a number contact" << std::endl;
		std::cin >> buf;
		nbr = atoi(buf.data());
		if (buf == "EXIT")
			exit(0);
		if (!(1 <= nbr && nbr <= 8 && nbr <= this->_n))
			std::cout << ERRO << "WRONG INPUT!!!" << std::endl << "Please try again!!!" << DEFT << std::endl;
	} while (!(1 <= nbr && nbr <= 8 && nbr <= this->_n));

	contacts[nbr - 1].printFullInfo();
}
