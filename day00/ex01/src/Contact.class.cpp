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

Contact::Contact( void )
// :	first_name(), last_name(), nickname(), login(), postal_address(), email_address(),
// 	phone_number(), birthday_date(), favorite_meal(), underwear_color(), darkest_secret()
{
	// std::memset(_first_name, 0, sizeof(_first_name));
	// std::memset(_last_name, 0 , sizeof(_last_name));
	// std::memset(_nickname, 0 , sizeof(_nickname));
	// std::memset(_login, 0 , sizeof(_login));
	// std::memset(_postal_address, 0 , sizeof(_postal_address));
	// std::memset(_email_address, 0 , sizeof(_email_address));
	// std::memset(_phone_number, 0 , sizeof(_phone_number));
	// std::memset(_birthday_date, 0 , sizeof(_birthday_date));
	// std::memset(_favorite_meal, 0 , sizeof(_favorite_meal));
	// std::memset(_underwear_color, 0 , sizeof(_underwear_color));
	// std::memset(_darkest_secret, 0 , sizeof(_darkest_secret));

	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	std::cout << "Destructor called" << std::endl;
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


void	Contact::print_info(void) {

	std::cout << _first_name << std::endl;
	std::cout << _last_name << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _login << std::endl;
	std::cout << _postal_address << std::endl;
	std::cout << _email_address << std::endl;
	std::cout << _phone_number << std::endl;
	std::cout << _birthday_date << std::endl;
	std::cout << _favorite_meal << std::endl;
	std::cout << _underwear_color << std::endl;
	std::cout << _darkest_secret << std::endl;
}
