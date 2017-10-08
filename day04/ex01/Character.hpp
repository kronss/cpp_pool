
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int _AP;
		AWeapon *_weapon;

	public:
		Character(std::string const & name);
		virtual ~Character(void);

		Character(Character const & src);
	
		Character & operator=(Character const & rhs);

	

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);

		//__Getter__
		std::string const getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;

};

std::ostream & operator << (std::ostream & o, Character const & rhs);

#endif
