// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/16 14:54:47 by ochayche          #+#    #+#             //
//   Updated: 2017/09/16 14:54:48 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

	class ZombieHorde
	{
		int		_N;
		Zombie	*_horde;

	public:
		ZombieHorde(int N);
		~ZombieHorde();
		

		int getNumber();
		Zombie *getPointer();

	};





#endif
