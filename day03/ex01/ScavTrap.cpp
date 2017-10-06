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
		_hitPoints(100), _maxHitPoints(100), _energyPoints(50),
		_maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamage(20),
		_rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "ScavTrap CTOR called " << std::endl;
}

ScavTrap::ScavTrap() :
		_hitPoints(100), _maxHitPoints(100), _energyPoints(50),
		_maxEnergyPoints(50), _level(1), _meleeAttackDamage(20),
		_rangedAttackDamage(15), _armorDamageReduction(3)
{
	static int i;
	std::stringstream ss;

	ss << "ScavTrap ROBOT #" << i;
	_name = ss.str();
	std::cout << "ScavTrap CTOR called " << std::endl;
	std::cout << "default bot # " << i << " created" << std::endl;
	++i;
}

ScavTrap::ScavTrap(const ScavTrap & obj)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap & rhs)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
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



void ScavTrap::rangedAttack(std::string const &target)
{

	std::cout << "ScavTrap <" << this->_name << "> attacks <"
			  << target << "> at range, causing <" << this->_rangedAttackDamage
			  << "> points of damage !" << std::endl;
}


void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap <" << this->_name << "> attacks <"
			  << target << "> at melee, causing <" << this->_meleeAttackDamage
			  << "> points of damage !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "BEEP!" << std::endl;
		return;
	}
	int damage = amount - _armorDamageReduction;
	if ( damage < 0 )
	{
		std::cout << "<" << _name << "> shield blocked damage <"
				  << amount << "> " << std::endl;
		return;
	}
	
	if (damage > _hitPoints)
		std::cout << FATALITY << "FATALITY" << RESET << " - ";

	_hitPoints -= amount;
	std::cout << "FR4G-TP <" << this->_name << "> take damage <"
									<< amount << ">" << std::endl;
	if (_hitPoints < 1)
	{
		std::cout << "<" << _name << "> is DEAD" << std::endl;
		_hitPoints = 0;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == _maxHitPoints)
	{
		std::cout << "repair doesn't need" << std::endl;
		return;
	}

	_hitPoints += amount;

	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "FR4G-TP <" << this->_name << "> repaired on <"
			  << amount << ">" << std::endl;
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
