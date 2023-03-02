#include "ClapTrap.hpp"

int main()
{
	ClapTrap	trap("Cedrik");

	trap.attack("Anaaaaaaaaaa");
	trap.beRepaired(2);
	trap.takeDamage(5);
	trap.attack("Anaaaaaaaaaa");
	trap.attack("Anaaaaaaaaaa");
	trap.attack("Anaaaaaaaaaa");
	trap.attack("Anaaaaaaaaaa");
	trap.attack("Anaaaaaaaaaa");
	trap.attack("Anaaaaaaaaaa");
	trap.attack("Anaaaaaaaaaa");
	trap.attack("Anaaaaaaaaaa");
	trap.attack("Anaaaaaaaaaa");
	trap.attack("Anaaaaaaaaaa");
	trap.takeDamage(20);
	trap.beRepaired(5);

	// std::cout << trap._name << std::endl;
	// std::cout << trap._attackDamage << std::endl;
	// std::cout << trap._energyPoints << std::endl;
	// std::cout << trap._hitPoints << std::endl;
	return 0;
}
