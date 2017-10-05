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

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "BEEP!" << std::endl;
		return;
	}
	if (amount <= _armorDamageReduction)
	{
		std::cout << "<" << _name << "> shield blocked damage <"
				  << amount << "> " << std::endl;
		return;
	}
	amount -= _armorDamageReduction;

	if (amount > _hitPoints)
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

void	FragTrap::beRepaired(unsigned int amount)
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


void	FragTrap::kick(std::string const &target)
{
	std::cout << "by the kick" << std::endl;
}

void	FragTrap::punch(std::string const &target)
{
	std::cout << "by the punch" << std::endl;
}
void	FragTrap::foreheadAttack(std::string const &target)
{
	std::cout << "by the foreheadAttack" << std::endl;
}

void	FragTrap::brutality(std::string const &target)
{
	std::cout << "by the brutality" << std::endl;
}
void	FragTrap::annihilation(std::string const &target)
{
	std::cout << "by the annihilation" << std::endl;
}


void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (_energyPoints < 25) {
		std::cout << "FR4G-TP <" << _name << "> not enough energy for attack <"
				  << target << ">" << std::endl;
	} else {
		_energyPoints -= 25;
		std::cout << "FR4G-TP <" << _name << "> Attack <" << target << "> ";

		void (FragTrap::*ptr[5])(std::string const &) =
				{&FragTrap::kick, &FragTrap::punch, &FragTrap::foreheadAttack,
				 &FragTrap::brutality, &FragTrap::annihilation};

		static unsigned int random = 0;
		std::srand((unsigned) time(0));
		random += std::rand();
		(this->*(ptr[random % 5]))(target);
	}
}
