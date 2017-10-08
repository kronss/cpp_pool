#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP


# include <string>
# include <iostream>

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	~SuperMutant();
	
	SuperMutant(SuperMutant const & copy);

	SuperMutant & operator = (SuperMutant const & rhs);

	virtual void takeDamage(int amount);


};




#endif
