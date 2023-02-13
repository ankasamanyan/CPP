# include "Zombie.h"

Zombie::Zombie()
{
}

void	Zombie::nameZombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout  << SKY << _name << PINK << "  :  Dieded.  ✨ RIP ✨" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout  << PURPLE << _name << GREEN << "  :  BraiiiiiiinnnzzzZ..." << RESET_LINE; 
}


// Zombie *newZombie(std::string name)
// {
// 	return(&Zombie(name));
// }