// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/16 14:54:41 by ochayche          #+#    #+#             //
//   Updated: 2017/09/16 14:54:42 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N)
{
	_horde = new Zombie[_N];
	std::cout << "ZombieHorde born" <<std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete [] _horde;
	std::cout << "ZombieHorde died" <<std::endl;
}


int	ZombieHorde::getNumber()
{
	return(this->_N);
}

Zombie *ZombieHorde::getPointer()
{
	return(this->_horde);
}
