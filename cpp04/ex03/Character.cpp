#include "Character.hpp"


Character::Character()
{
	_name = "Default";
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character &Character::operator=(const Character &copy)
{
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != nullptr)
			delete (_inventory[i]);
		if (copy._inventory[i] != nullptr)
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
	}
	return(*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != nullptr)
			delete (_inventory[i]);
	}
}

std::string const &Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria* m)
{
	if (m == nullptr)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index < 4)
		_inventory[index] = nullptr;
}

void Character::use(int index, ICharacter& target)
{
	if (index >= 0 && index < 4)
		if (_inventory[index])
			_inventory[index]->use(target);
}