#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>

# define FATALITY "\e[31m"
# define RESET "\e[39m"


class FragTrap : public ClapTrap
{

public:
	FragTrap(std::string const & name);
	FragTrap(const FragTrap & copy);

	FragTrap &operator = (const FragTrap & obj);

	~FragTrap();


	void vaulthunter_dot_exe(std::string const & target);
/******* vaulthunter_dot_exe function ******/
	void kick(std::string const & target);
	void punch(std::string const & target);
	void foreheadAttack(std::string const & target);
	void brutality(std::string const & target);
	void annihilation(std::string const & target);
};

#endif
