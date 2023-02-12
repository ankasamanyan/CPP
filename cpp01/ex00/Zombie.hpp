# ifndef ZOMBIE_HPP
	#define ZOMBIE_HPP
#include <string>
#include <iostream>
// # include "Zombie.h"

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
	public:
		void	announce(void);
};

# endif