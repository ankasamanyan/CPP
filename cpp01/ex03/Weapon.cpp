#include "Weapon.hpp"

const std::string	&Weapon::getType()
{
	return(_type);
}

void	Weapon::setType(const std::string &typey)
{
	_type = typey;
}

Weapon::Weapon(const std::string &typey)
{
	setType(typey);
}
Weapon::Weapon()
{
	_type = "default";
}

Weapon::~Weapon()
{
}
