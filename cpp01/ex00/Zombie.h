#ifndef ZOMBIE_H
#define ZOMBIE_H
# include "Zombie.hpp"

/* It creates a zombie, name it, and return 
	it so you can use it outside of the function */
Zombie*	newZombie( std::string name );
/* It creates a zombie, name it, and the
	zombie announces itself. */
void	randomChump( std::string name );

#endif