#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const & name) : ClapTrap(100, 100, name, 30, 20, 5)
{
	std::cout << "FragTrap() CTOR called " << std::endl;
}

// FragTrap::FragTrap() :
// 		_hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
// 		_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
// 		_armorDamageReduction(5)
// {
// 	static int i;
// 	std::stringstream ss;
// 	ss << "ROBOT #" << i;
// 	_name = ss.str();
// 	std::cout << "default bot # " << i << " created" << std::endl;
// 	++i;
// }

FragTrap::FragTrap(const FragTrap & copy) : ClapTrap(copy)
	// _hitPoints(copy._hitPoints),
	// _maxHitPoints(copy._maxHitPoints), _energyPoints(copy._energyPoints),
	// _maxEnergyPoints(copy._maxEnergyPoints), _level(copy._level),
	// _name(copy._name), _meleeAttackDamage(copy._meleeAttackDamage),
	// _rangedAttackDamage(copy._rangedAttackDamage),
	// _armorDamageReduction(copy._armorDamageReduction)
{
	std::cout << "FragTrap( copy ) Copy Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap() Destructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap & rhs)
{
	std::cout << "FragTrap( = ) Assignation operator called" << std::endl;
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




void	FragTrap::kick(std::string const &target)
{
	std::cout <<"by the kick. "  << target << " is crying" << std::endl;
}

void	FragTrap::punch(std::string const &target)
{
	std::cout << "by the punch. " << target << " is crying" << std::endl;
}
void	FragTrap::foreheadAttack(std::string const &target)
{
	std::cout << "by the foreheadAttack. " << target << " is crying" << std::endl;
}

void	FragTrap::brutality(std::string const &target)
{
	std::cout << "by the brutality. " << target << " is crying" << std::endl;
}
void	FragTrap::annihilation(std::string const &target)
{
	std::cout << "by the annihilation. " << target << "is crying" << std::endl;
}


void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
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
