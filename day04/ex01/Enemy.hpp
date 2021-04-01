#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class			Enemy
{
public:
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	std::string				getType() const;
	int						getHP() const;
	virtual void			takeDamage(int damage);
private:
	Enemy();
protected:
	int 					_hp;
	std::string
};

#endif