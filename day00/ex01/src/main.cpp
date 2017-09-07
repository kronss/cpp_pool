// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/05 14:42:31 by ochayche          #+#    #+#             //
//   Updated: 2017/09/05 14:42:32 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "header.hpp"

int			main(void)
{
	PhoneBook	book;
	std::string	buf;

	std::cout << "please write '" << CYAN << "ADD" << DEFT << "' or '" << CYAN << "SEARCH" << DEFT << "' or '" << CYAN << "'EXIT'" << DEFT << std::endl;
	std::cout << CYAN << "ADD" << DEFT << " to add contact" << std::endl;
	std::cout << CYAN << "SEARCH" << DEFT " to search contact" << std::endl;
	std::cout << CYAN << "EXIT" << DEFT " to exit from program" << std::endl;

	while (1)
	{
		std::cout << CYAN << book.get_nbr() << DEFT << " contacts in PhoneBook" << std::endl;
		std::cin >> buf;

		if (buf == "ADD")
			book.addContact();
		else if (buf == "SEARCH")
		{
			book.showContact();
			book.menageContact();
		}
		else if (buf == "EXIT")
			break ;
	}
	return 0;
}
