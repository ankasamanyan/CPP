#include "ClapTrap.hpp"

int main()
{
	/* test 1 */
	ClapTrap catto("Catto");
    ClapTrap doggo("Doggo");

    catto.attack("Mouse");
    catto.beRepaired(2);
    doggo.attack("Birdy");
    doggo = catto;
    doggo.attack("Birdy");
    catto = doggo;
    doggo.takeDamage(5);
    doggo.beRepaired(2);

	/* test 2 */
	// ClapTrap	trap("Cedrik");

	// trap.attack("Anaaaaaaaaaa");
	// trap.beRepaired(2);
	// trap.takeDamage(5);
	// trap.attack("Anaaaaaaaaaa");
	// trap.attack("Anaaaaaaaaaa");
	// trap.attack("Anaaaaaaaaaa");
	// trap.attack("Anaaaaaaaaaa");
	// trap.attack("Anaaaaaaaaaa");
	// trap.attack("Anaaaaaaaaaa");
	// trap.attack("Anaaaaaaaaaa");
	// trap.attack("Anaaaaaaaaaa");
	// trap.attack("Anaaaaaaaaaa");
	// trap.attack("Anaaaaaaaaaa");
	// trap.takeDamage(20);
	// trap.beRepaired(5);

	return (0);
}
