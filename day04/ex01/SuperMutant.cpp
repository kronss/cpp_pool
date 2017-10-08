#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
: Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;	
}
	

SuperMutant::SuperMutant(SuperMutant const & copy)
: Enemy(copy)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant & SuperMutant::operator = (SuperMutant const & rhs)
{
	Enemy::operator = (rhs);
	return *this;
}

//virtual
void SuperMutant::takeDamage(int amount)
{
	if (amount <= 0)
		return;
	int damage = amount - 3;
	if (damage <= 0)
		return;
	setHP(getHP() - amount);
}


/*
• HP : 170
• Type : “Super Mutant”
• On birth, displays : “Gaaah. Me want smash heads !”
• Upon death, displays : “Aaargh ...”
• Overloads takeDamage to take 3 less damage points than normal (Yeah, they’re
kinda strong, these guys.)
*/