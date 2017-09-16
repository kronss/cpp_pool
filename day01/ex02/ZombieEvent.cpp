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
	std::cout << "event constructor called" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "event destructor called" << std::endl;
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
	const char *pool[] = {"Jimm", "Bill", "Willy", "Poly", "Sasha"};

	int random;
	std::srand(time(NULL));
	random = std::rand() % 3;

	setZombieType("Zombie");
	Zombie *nZombie = newZombie(pool[random]);
	nZombie->announce();

	delete nZombie;
}
