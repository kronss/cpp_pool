#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

#define FATALITY "\e[31m"
#define RESET "\e[39m"


class FragTrap
{
private:
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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap & obj);

	FragTrap &operator = (const FragTrap & obj);

	~FragTrap();


	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


///////////////////////
	void vaulthunter_dot_exe(std::string const & target);
/*************/
	void kick(std::string const & target);
	void punch(std::string const & target);
	void foreheadAttack(std::string const & target);
	void brutality(std::string const & target);
	void annihilation(std::string const & target);
///////////////////////

};

#endif
