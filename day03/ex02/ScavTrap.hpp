// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/04 16:14:22 by ochayche          #+#    #+#             //
//   Updated: 2017/10/04 16:14:23 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP


# include "ClapTrap.hpp"
# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>


# define FATALITY "\e[31m"
# define RESET "\e[39m"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & copy);
	
	ScavTrap& operator = (ScavTrap const & obj);
	
	~ScavTrap();


	void challengeNewcomer(std::string const & target);
/******** challengeNewcomer function *****/
	void kick(std::string const & target);
	void punch(std::string const & target);
	void foreheadAttack(std::string const & target);
	void brutality(std::string const & target);
	void annihilation(std::string const & target);
};

#endif
