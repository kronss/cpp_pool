#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string & name, int apcost, int damage)
: _name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::~AWeapon()
{

}

AWeapon::AWeapon(const AWeapon & copy)
: _name(copy._name), _apcost(copy._apcost), _damage(copy._damage)
{

}

AWeapon & AWeapon::operator = (const AWeapon & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
	}
	return *this;
}

std::string const AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apcost;	
}

int AWeapon::getDamage() const
{
	return _damage;
}
