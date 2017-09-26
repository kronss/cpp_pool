//
// Created by kron on 26.09.17.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
		_hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
		_level(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20),
		_armorDamageReduction(5)
{
	std::cout << "CTOR called " << std::endl;
}

FragTrap::FragTrap() :
		_hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
		_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
		_armorDamageReduction(5)
{
	static int i;
	std::stringstream ss;
	ss << "ROBOT #" << i;
	_name = ss.str();
	std::cout << "default bot # " << i << " created" << std::endl;
	++i;
}

FragTrap::FragTrap(const FragTrap & obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
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

void FragTrap::rangedAttack(std::string const &target)
{

	std::cout << "FR4G-TP <" << this->_name << "> attacks <"
			  << target << "> at range, causing <" << this->_rangedAttackDamage
			  << "> points of damage !" << std::endl;
}


void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <"
			  << target << "> at melee, causing <" << this->_meleeAttackDamage
			  << "> points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;

	if (amount > 100)
		std::cout << "\e[31;1m" << "FATALITY" << "\e[39m" << std::endl;

	std::cout << "FR4G-TP <" << this->_name << "take damage <"
			<< amount << ">" << std::endl;

	if (_hitPoints < 1)
		std::cout << _name << " DEAD" << std::endl;
}