#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>
# include "Zombie.h"

class Zombie
{
	private:
		std::string	_name;

	public:
		void	announce(void);
	public:
		Zombie();
		~Zombie();
};

#endif