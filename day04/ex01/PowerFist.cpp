#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50)
{

}

PowerFist::~PowerFist()
{

}

PowerFist::PowerFist(const PowerFist & copy)
: AWeapon(copy)
{

}

PowerFist & PowerFist::operator = (const PowerFist & rhs)
{
	AWeapon::operator = (rhs);
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}


/*
PowerFist :
◦ Name : “Power Fist”
◦ Damage : 50
◦ AP cost : 8
◦ Output of attack() : “* pschhh... SBAM! *”
*/