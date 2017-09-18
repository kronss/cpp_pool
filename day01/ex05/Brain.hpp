// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/16 17:28:18 by ochayche          #+#    #+#             //
//   Updated: 2017/09/16 17:28:19 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP
# define BRAIN_HPP 

# include <iostream>
# include <sstream>

class Brain
{
	std::string	_adr;

public:
	Brain();
	~Brain();
	
	std::string identify() const;
};

#endif
