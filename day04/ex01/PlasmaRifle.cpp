#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
: AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & copy)
: AWeapon(copy)
{

}

PlasmaRifle & PlasmaRifle::operator = (const PlasmaRifle & rhs)
{
	AWeapon::operator = (rhs);
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
