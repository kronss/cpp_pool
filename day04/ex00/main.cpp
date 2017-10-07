#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << "_____________" << std::endl;
	{
		Sorcerer *r = new Sorcerer("Robert", "the Magnificent");
		Victim *v = new Peon("Joe");;
		r->polymorph(*v);
		delete v;
		delete r;
	}




	return 0;
}