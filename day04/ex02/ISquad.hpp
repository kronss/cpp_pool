#ifndef ISQUAD
# define ISQUAD

//# include "ISquad.hpp"

# include <iostream>



class ISquad
{
public:


	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;


};



#endif
