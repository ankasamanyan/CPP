#include "Zombie.h"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie	*lilZombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		lilZombie[i].nameZombie(name);
		std::cout << i + 1 << ".";
		lilZombie[i].announce();
	}
	std::cout << std::endl;
	return (lilZombie);
}