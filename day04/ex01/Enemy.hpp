#ifndef ENEMY_HPP
# define ENEMY_HPP


# include <string>
# include <iostream>

class Enemy
{
private:
	int          _HP;
	std::string  _type;

public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();

	Enemy(Enemy const & copy);
	Enemy & operator = (Enemy const & rhs);

	virtual void takeDamage(int amount);

//getter
	std::string const getType() const;
	int getHP() const;

//setter
	void setHP(int hp);

};

#endif
