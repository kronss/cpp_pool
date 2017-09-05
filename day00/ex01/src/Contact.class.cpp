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
	std::memset(first_name, 0, sizeof(first_name));
	std::memset(last_name, 0 , sizeof(last_name));
	std::memset(nickname, 0 , sizeof(nickname));
	std::memset(login, 0 , sizeof(login));
	std::memset(postal_address, 0 , sizeof(postal_address));
	std::memset(email_address, 0 , sizeof(email_address));
	std::memset(phone_number, 0 , sizeof(phone_number));
	std::memset(birthday_date, 0 , sizeof(birthday_date));
	std::memset(favorite_meal, 0 , sizeof(favorite_meal));
	std::memset(underwear_color, 0 , sizeof(underwear_color));
	std::memset(darkest_secret, 0 , sizeof(darkest_secret));


	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}
