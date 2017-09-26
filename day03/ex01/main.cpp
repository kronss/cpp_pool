//
// Created by kron on 26.09.17.
//

#include "FragTrap.hpp"

int		main()
{
	FragTrap a;
	FragTrap b;
	FragTrap c;

	a.rangedAttack("student");
	b.meleeAttack("student");
	c.rangedAttack("student");
	b.takeDamage(33);
	c.takeDamage(103);

	return (0);
}
