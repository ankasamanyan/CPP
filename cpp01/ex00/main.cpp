# include "Zombie.h"

int main(void)
{
	Zombie Mort("Mort");
	Zombie *Maurice;

	Mort.announce();
	Maurice = newZombie("Maurice");
	Maurice->announce();
	randomChump("Julien");
	delete Maurice;
	return (0);
}
