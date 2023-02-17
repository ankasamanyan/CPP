
#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapony)
{
    _weapon = &weapony;
}


HumanB::HumanB(std::string name)
{
    _name = name;
}

HumanB::~HumanB()
{
}
