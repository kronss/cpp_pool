#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int energyPoints, int maxEnergyPoints,
					std::string const & name, int meleeAttackDamage, 
					int rangedAttackDamage, int armorDamageReduction)

	: _hitPoints(100), _maxHitPoints(100), _energyPoints(energyPoints),
	  _maxEnergyPoints(maxEnergyPoints), _level(1), _name(name),
	  _meleeAttackDamage(meleeAttackDamage), _rangedAttackDamage(rangedAttackDamage),
	  _armorDamageReduction(armorDamageReduction)
{
	std::cout << "ClapTrap() CTOR called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap() DESCTOR called" << std::endl;
}


ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap( = ) Assignation operator called" << std::endl;

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


ClapTrap::ClapTrap(ClapTrap const & copy) : _hitPoints(copy._hitPoints),
	_maxHitPoints(copy._maxHitPoints), _energyPoints(copy._energyPoints),
	_maxEnergyPoints(copy._maxEnergyPoints), _level(copy._level),
	_name(copy._name), _meleeAttackDamage(copy._meleeAttackDamage),
	_rangedAttackDamage(copy._rangedAttackDamage),
	_armorDamageReduction(copy._armorDamageReduction)
{
	std::cout << "ClapTrap( & copy ) CTOR called" << std::endl;
}


void	ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << "CT-TP <" << this->_name << "> attacks <"
			  << target << "> at range, causing <" << this->_rangedAttackDamage
			  << "> points of damage !" << std::endl;
}


void	ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "CT-TP <" << this->_name << "> attacks <"
			  << target << "> at melee, causing <" << this->_meleeAttackDamage
			  << "> points of damage !" << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "BEEP!" << std::endl;
		return;
	}
	int damage = amount - _armorDamageReduction;
	if (damage < 0)
	{
		std::cout << "<" << _name << "> shield blocked damage <"
				  << amount << "> " << std::endl;
		return;
	}
	
	if (damage > _hitPoints)
		std::cout << FATALITY << "FATALITY" << RESET << " - ";

	_hitPoints -= amount;
	std::cout << "CT-TP <" << this->_name << "> take damage <"
									<< amount << ">" << std::endl;
	if (_hitPoints < 1)
	{
		std::cout << "<" << _name << "> is DEAD" << std::endl;
		_hitPoints = 0;
	}
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == _maxHitPoints)
	{
		std::cout << "repair doesn't need" << std::endl;
		return;
	}

	_hitPoints += amount;

	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "CT-TP <" << this->_name << "> repaired on <"
			  << amount << ">" << std::endl;
}

