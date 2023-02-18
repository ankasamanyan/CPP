#include "HumanA.hpp"	


HumanA::HumanA(std::string name, Weapon &weapony) : _weapon(weapony)
{
    _name = name;
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << PURPLE << _name << GREEN << "	attacks with their	" << PINK << _weapon.getType() << std::endl;
}