#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP


# include <string>
# include <iostream>

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	~PlasmaRifle();

	PlasmaRifle(const PlasmaRifle & copy);
	PlasmaRifle & operator = (const PlasmaRifle &rhs);

	void attack() const;
};

#endif
