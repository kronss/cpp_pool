#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

const std::string &Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string set)
{
	_type = set;
}
