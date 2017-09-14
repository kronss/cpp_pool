// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/14 17:11:47 by ochayche          #+#    #+#             //
//   Updated: 2017/09/14 17:12:04 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

void memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}
