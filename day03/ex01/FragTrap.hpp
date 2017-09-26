//
// Created by kron on 26.09.17.
//

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

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

	~FragTrap();

	FragTrap &operator = (const FragTrap & obj);


//

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
//	beRepaired(unsigned int amount);
//

//	vaulthunter_dot_exe(std::string const & target);

};

#endif //FRAGTRAP_HPP
