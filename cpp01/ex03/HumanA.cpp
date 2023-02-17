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
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}