// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/16 17:39:24 by ochayche          #+#    #+#             //
//   Updated: 2017/09/16 17:39:25 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP 

# include <iostream>
# include "Brain.hpp"

class Human
{
	const Brain _brain;
public:
	Human();
	~Human();
	
	std::string	identify();
	Brain		getBrain();
};




#endif
