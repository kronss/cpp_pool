#include "Victim.hpp"

Victim::Victim(const std::string &name)
: _name(name)
{
	std::cout << "Some random victim called " << _name
	<< " just popped !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name
	<< " just died for no apparent reason !" << std::endl;
}

Victim::Victim(const Victim & copy)
: _name(copy._name)
{
	std::cout << "Some random victim called " << _name
	<< " just popped !" << std::endl;
}

Victim & Victim::operator = (const Victim &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
	}
	return *this;
}

void	Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep ! "
	<< std::endl;
}

std::string Victim::getName() const
{
	return _name;
}

std::ostream &operator << (std::ostream & o, const Victim &rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters !"
	<< std::endl;
	return o;
}
