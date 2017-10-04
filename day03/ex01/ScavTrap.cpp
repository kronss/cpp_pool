// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/04 16:14:16 by ochayche          #+#    #+#             //
//   Updated: 2017/10/04 16:14:16 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
		_hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
		_level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15),
		_armorDamageReduction(3)
{
	std::cout << "ScavTrap CTOR called " << std::endl;
}

ScavTrap::ScavTrap() :
		_hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
		_level(1), _meleeAttackDamage(20), _rangedAttackDamage(15),
		_armorDamageReduction(3)
{
	static int i = 0;
	std::stringstream ss;

	ss << "ROBOT #" << i;
	_name = ss.str();
	std::cout << "ScavTrap CTOR called " << std::endl;
	std::cout << "default bot # " << i << " created" << std::endl;
	++i;
}




