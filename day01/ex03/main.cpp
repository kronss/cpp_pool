// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/16 14:58:30 by ochayche          #+#    #+#             //
//   Updated: 2017/09/16 14:58:31 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde horde = ZombieHorde(5);

	for (int i = 0, limit = horde.getNumber(); i < limit; ++i)
	{
		horde.getPointer()[i].announce();
	}
	return 0;
}
