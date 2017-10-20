#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"


class Squad : public ISquad
{
	int _count;


public:
	Squad();
	~Squad();

	Squad(Squad const & obj);

	Squad & operator = (Squad const & rhs);


	
	int getCount();

	//ISpaceMarine * IgetUnit(int n);
	//push(XXX);

};




#endif
