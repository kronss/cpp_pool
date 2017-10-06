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
