#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

	class ClapTrap
	{
	// protected:
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
		ClapTrap();
		~ClapTrap();

		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
	ClapTrap(int hitPoints, int mHitPoints, int energyPoints, int mEnergyPoints, int level, std::string const & name, int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction);

	ClapTrap & operator=(ClapTrap const & rhs);

	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

		
	};


#endif
