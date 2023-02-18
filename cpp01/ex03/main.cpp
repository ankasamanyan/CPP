#include "HumanA.hpp"
#include "HumanB.hpp"

// int main(void)
// {
//     Weapon  wpn("hate");
//     HumanA  hmn("Unhappy Rick", wpn);
//     hmn.attack();

//     return 0;
// }

int main() {

	Weapon  club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	return 0;
}