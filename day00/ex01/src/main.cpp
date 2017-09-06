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

// void		to_lower(char *str)
// {
// 	register char *tmp = str;

// 	while (*tmp != '\0')
// 	{
// 		if ('A' <= *tmp && *tmp <= 'Z')
// 			*tmp += 32;
// 		++tmp;
// 	}
// }

int			main(void)
{
	PhoneBook	book;
	Contact		cont;
	std::string	buf;

	
	std::cout << "please write 'ADD' or 'SEARCH' or 'EXIT'" << std::endl;
	std::cout << "'ADD' to add contact" << std::endl;
	std::cout << "'SEARCH' to search contact" << std::endl;
	std::cout << "'EXIT' to exit from program" << std::endl;

	while (1)
	{
		std::cout << "Contacts in PhoneBook == " << book.get_nbr() << std::endl;
		std::cin >> buf;
		// to_lower(buf);

		if (buf == "ADD")
			book.addContact();
		
		else if (buf == "SEARCH")
			book.showContact();
		
		else if (buf == "EXIT")
			break ;
		
		else
			std::cout << buf << std::endl;
	}


	std::cout << "sizeof == " << sizeof(cont) << std::endl;
	// std::cout << cont.first_name << std::endl;
	return 0;
}
