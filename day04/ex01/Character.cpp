#include "Character.hpp"

Character::Character(std::string const & name)
: _name(name), _AP(40), _weapon(NULL)
{
	return;
}

Character::~Character()
{}

Character::Character(Character const & copy)
: _name(copy._name), _AP(copy._AP), _weapon(copy._weapon)
{

}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_AP = rhs._AP;
		this->_weapon = rhs._weapon;
	}
	return *this;
}

void Character::recoverAP()
{
	if (_AP > 40)
	{
		return ;
	}
	
	_AP += 10;
	
	if (_AP > 40)
	{
		_AP = 40;
		return ;
	}
}

void Character::equip(AWeapon * weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	std::cout << enemy << std::endl;
	if (!enemy || !_weapon)
		return ;

	if (_AP >= _weapon->getAPCost())
	{
		std::cout << _name
		<< " attacks " << enemy->getType()
		<< " with a " << _weapon->getName()
		<< std::endl;

		_AP -= _weapon->getAPCost();

		_weapon->attack();

		enemy->takeDamage(_weapon->getDamage());

		if (enemy->getHP() <= 0)
		{
			delete enemy;
		}
	}
}

//getter
std::string const Character::getName() const
{
	return _name;
}

int Character::getAP() const
{
	return _AP;
}

AWeapon *Character::getWeapon() const
{
	return _weapon;
}

//ostream
std::ostream & operator << (std::ostream & o, Character const & rhs)
{
	o << rhs.getName() << " has " << rhs.getAP() << " AP and ";

	if (rhs.getWeapon())
	{
		o << "wields a " << rhs.getWeapon()->getName() << std::endl;		
	}
	else
	{
		o << "is unarmed" << std::endl;
	}
	return o;
}
