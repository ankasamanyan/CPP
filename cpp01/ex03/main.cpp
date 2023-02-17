#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon  wpn("hate");
    HumanA  hmn("Unhappy Rick", wpn);
    hmn.attack();

    return 0;
}
