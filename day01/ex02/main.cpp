// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/14 18:46:41 by ochayche          #+#    #+#             //
//   Updated: 2017/09/14 18:46:43 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

int main(int argc, char const *argv[])
{

	ZombieEvent *zomb_event = new ZombieEvent();

	zomb_event->setZombieType("warior");
	Zombie *zomb2 = zomb_event->newZombie("garosh");

	delete zomb2;


	return 0;
}
