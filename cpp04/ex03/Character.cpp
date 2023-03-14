#include "Character.hpp"


Character::Character()
{
}

Character::Character(std::string name)
{
	_name = name;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character &Character::operator=(const Character &copy)
{
	_name = copy._name;
	for (int i = 0; i < 5; i++)
	{
		if (_inventory[i])
			delete (_inventory[i]);
		_inventory[i] = copy._inventory[i];
	}
	return(*this);
}

Character::~Character()
{
}