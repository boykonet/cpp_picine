#include "Enemy.hpp"

Enemy::Enemy() : _hp(100), _type("Super Puper")
{
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const &o)
{
	*this = o;
}

Enemy					&Enemy::operator=(Enemy const &o)
{
	if (this != &o)
	{
		this->_hp = o.getHP();
		this->_type = o.getType();
	}
	return *this;
}

std::string const		&Enemy::getType() const
{
	return this->_type;
}

int						Enemy::getHP() const
{
	return this->_hp;
}

void					Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		this->_hp -= damage;
		if (this->_hp < 0)
			this->_hp = 0;
	}
}