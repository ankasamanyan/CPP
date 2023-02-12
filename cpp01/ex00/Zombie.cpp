# include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << std::endl << SKY << _name << PINK << "	:  Dieded.  ✨ RIP ✨" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout  << PURPLE << _name << GREEN << "	:  BraiiiiiiinnnzzzZ..." << RESET_LINE; 
}

