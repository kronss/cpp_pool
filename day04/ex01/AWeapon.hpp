#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
private:
	std::string _name;
	int _apcost;
	int _damage;

public:
	AWeapon(const std::string & name, int apcost, int damage);
	virtual ~AWeapon(void);

	AWeapon(const AWeapon & copy);

	AWeapon & operator = (const AWeapon & rhs);

	// __Getter__
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;

	// // __Setter__
	// void setName(std::string);
	// void setDamage(int);
	// void setAPCost(int);
	
};

#endif