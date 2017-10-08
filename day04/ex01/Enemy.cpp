#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
: _HP(hp), _type(type)
{

}


Enemy::~Enemy()
{
	
}

Enemy::Enemy(Enemy const & copy)
: _HP(copy._HP), _type(copy._type)
{
	
}

Enemy & Enemy::operator = (Enemy const & rhs)
{
	if (this != &rhs)
	{
		this->_HP = rhs._HP;
		this->_type = rhs._type;
	}
	return *this;
}

//virtual
void Enemy::takeDamage(int amount)
{
	if (amount <= 0)
		return;
	_HP -= amount;
}

//getter
int Enemy::getHP() const
{
	return _HP;
}

std::string const Enemy::getType() const
{
	return _type;
}

//setter
void Enemy::setHP(int hp)
{
	_HP = hp;
}
