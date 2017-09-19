#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _weapon(club)
{
	std::cout << "HumanA born" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA died" << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
