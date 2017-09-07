// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/05 14:59:52 by ochayche          #+#    #+#             //
//   Updated: 2017/09/05 14:59:52 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "header.hpp"

Contact::Contact( void ) {
	return ;
}

Contact::~Contact( void ) {
	return ;
}

void	Contact::set_data( void ) {

	std::cout << "Enter your first name" << std::endl;
	std::cin >> this->_first_name;
	std::cout << "Enter your last name" << std::endl;
	std::cin >> this->_last_name;
	std::cout << "Enter your nickname" << std::endl;
	std::cin >> this->_nickname;
	std::cout << "Enter your login" << std::endl;
	std::cin >> this->_login;
	std::cout << "Enter your postal address" << std::endl;
	std::cin >> this->_postal_address;
	std::cout << "Enter your email address" << std::endl;
	std::cin >> this->_email_address; 
	std::cout << "Enter your phone number" << std::endl;
	std::cin >> this->_phone_number;
	std::cout << "Enter your birthday date" << std::endl;
	std::cin >> this->_birthday_date;
	std::cout << "Enter your favorite meal" << std::endl;
	std::cin >> this->_favorite_meal;
	std::cout << "Enter your underwear color" << std::endl;
	std::cin >> this->_underwear_color;
	std::cout << "Enter your darkest secret" << std::endl;
	std::cin >> this->_darkest_secret;

}

std::string truncate(std::string str, size_t width)
{
    if (str.length() > width)
		return str.substr(0, width - 1) + ".";
    return str;
}

void	Contact::printInfo( int i ) {

	std::cout << std::right << std::setw(10) << i << "|";
	std::cout << std::right << std::setw(10) << truncate(this->_first_name, 10) << "|";
	std::cout << std::right << std::setw(10) << truncate(this->_last_name, 10) << "|";
	std::cout << std::right << std::setw(10) << truncate(this->_nickname, 10) << "|" << std::endl;

}

void	Contact::printFullInfo( void ) {

	std::cout << CYAN << std::right << std::setw(20) << "first name: " << DEFT << _first_name << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "last name: " << DEFT << _last_name << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "nickname: " << DEFT << _nickname << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "login: " << DEFT << _login << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "postal address: " << DEFT << _postal_address << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "email address: " << DEFT << _email_address << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "phone number: " << DEFT << _phone_number << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "birthday date: " << DEFT << _birthday_date << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "avorite meal: " << DEFT << _favorite_meal << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "underwear color: " << DEFT << _underwear_color << std::endl;
	std::cout << CYAN << std::right << std::setw(20) << "darkest secret: " << DEFT << _darkest_secret << std::endl;

}