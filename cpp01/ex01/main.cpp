#include "Zombie.h"

int main(void)
{
	Zombie	*alottaZombies;

	alottaZombies = zombieHorde(9, "Bawb");
	delete []alottaZombies;
	return (0);
}
