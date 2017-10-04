// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/04 16:14:22 by ochayche          #+#    #+#             //
//   Updated: 2017/10/04 16:14:23 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

#define FATALITY "\e[31m"
#define RESET "\e[39m"

class ScavTrap
{
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	std::string	_name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;

public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & obj);
	ScavTrap& operator = (ScavTrap const & obj);
	~ScavTrap();
};

#endif
