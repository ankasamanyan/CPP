
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

void    HumanB::attack(void)
{
	    std::cout << PURPLE << _name << GREEN << "	attacks with their	" << PINK << _weapon->getType() << std::endl;
}