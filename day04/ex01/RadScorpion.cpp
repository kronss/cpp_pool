#include "RadScorpion.hpp"


RadScorpion::RadScorpion()
: Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;	
}
	

RadScorpion::RadScorpion(RadScorpion const & copy)
: Enemy(copy)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

RadScorpion & RadScorpion::operator = (RadScorpion const & rhs)
{
	Enemy::operator = (rhs);
	return *this;
}

//virtual
void RadScorpion::takeDamage(int amount)
{
	if (amount <= 0)
		return;

	setHP(getHP() - amount);
}

/*
HP : 80
◦ Type : “RadScorpion”
◦ On birth, displays : “* click click click *”
◦ Upon death, displays : “* SPROTCH *”
*/
