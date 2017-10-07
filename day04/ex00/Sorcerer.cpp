#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string & name, const std::string & title)
: _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title
	<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
: _name(copy._name), _title(copy._title) 
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;	
}

Sorcerer & Sorcerer::operator = (const Sorcerer & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return *this;
}

void	Sorcerer::polymorph(Victim const & obj) const
{
	obj.getPolymorphed();
}

std::string Sorcerer::getName() const
{
	return _name;
}

std::string Sorcerer::getTitle() const
{
	return _title;
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs)
{
	
	o << "I am " << rhs.getName() << ", "
	<< rhs.getTitle() << ", and I like ponies !"
	<< std::endl;
	return o;
}
