#include "Zombie.h"

int main(void)
{
	Zombie	*alottaZombies;

	alottaZombies = zombieHorde(14, "Bawb");
	delete []alottaZombies;
	return (0);
}
