#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP


# include <string>
# include <iostream>

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	~RadScorpion();
	
	RadScorpion(RadScorpion const & copy);

	RadScorpion & operator = (RadScorpion const & rhs);

	virtual void takeDamage(int amount);


};




#endif
