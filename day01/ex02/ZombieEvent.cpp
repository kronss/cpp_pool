// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/14 18:47:09 by ochayche          #+#    #+#             //
//   Updated: 2017/09/14 18:47:32 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{
	
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name, this->_type);
	return (newZombie);
}

void ZombieEvent::randomChump()
{
	const char *pool[] =
	{"abc_1", "abc_2", "abc_3", "abc_4", "abc_5", "abc_6","abc_7"};
	int nbr;

	srand(time(NULL));

	nbr = rand() % 7;




}