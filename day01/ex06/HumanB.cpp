#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{

	std::cout << "HumanB born" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB died" << std::endl;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}