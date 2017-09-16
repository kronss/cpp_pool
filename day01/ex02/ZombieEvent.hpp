// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/14 18:46:57 by ochayche          #+#    #+#             //
//   Updated: 2017/09/14 18:46:58 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

	class ZombieEvent
	{
		std::string _type;
	public:
		ZombieEvent();
		~ZombieEvent();


		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);


		void randomChump();

	};

#endif
