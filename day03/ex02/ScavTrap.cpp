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

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(50, 50, name, 20, 15, 3)
{
	std::cout << "ScavTrap() CTOR called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap( Copy ) Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap & rhs)
{
	std::cout << "ScavTrap( = ) Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_hitPoints = rhs._hitPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_level = rhs._level;
		this->_name = rhs._name;
		this->_meleeAttackDamage = rhs._meleeAttackDamage;
		this->_rangedAttackDamage = rhs._rangedAttackDamage;
		this->_armorDamageReduction = rhs._armorDamageReduction;
	}
	return *this;
}



void	ScavTrap::challengeNewcomer(std::string const & target) {
	if (_energyPoints < 25) {
		std::cout << "FR4G-TP <" << _name << "> not enough energy for attack <"
				  << target << ">" << std::endl;
	} else {
		_energyPoints -= 25;
		std::cout << "FR4G-TP <" << _name << "> Attack <" << target << "> ";

		void (ScavTrap::*ptr[5])(std::string const &) =
				{&ScavTrap::kick, &ScavTrap::punch, &ScavTrap::foreheadAttack,
				 &ScavTrap::brutality, &ScavTrap::annihilation};

		static unsigned int random = 0;
		std::srand((unsigned) time(0));
		random += std::rand();
		(this->*(ptr[random % 5]))(target);
	}
}

void	ScavTrap::kick(std::string const &target)
{
	std::cout << "by the kick. " << target << "kick off" << std::endl;
}

void	ScavTrap::punch(std::string const &target)
{
	std::cout << "by the punch. " << target << "kick off"  << std::endl;
}
void	ScavTrap::foreheadAttack(std::string const &target)
{
	std::cout << "by the foreheadAttack. " << target << "kick off"  << std::endl;
}

void	ScavTrap::brutality(std::string const &target)
{
	std::cout << "by the brutality. " << target << "kick off"  << std::endl;
}
void	ScavTrap::annihilation(std::string const &target)
{
	std::cout << "by the annihilation. " << target << "kick off"  << std::endl;
}
