// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/14 18:47:47 by ochayche          #+#    #+#             //
//   Updated: 2017/09/14 18:47:48 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = randomChump();
	_type = "Zombie";
	std::cout << "Zombie born" <<std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie died" <<std::endl;
}

void	Zombie::announce()
{
	std::cout << CYAN;
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << DEFT;
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
}


const char *Zombie::randomChump()
{
	const char *pool[] = {"Jimm", "Bill", "Willy", "Poly", "Sasha", "PuPy"};

	static int random = 0;
	std::srand((unsigned)time(0));
	random += std::rand();
	return (pool[random % 6]);
}
