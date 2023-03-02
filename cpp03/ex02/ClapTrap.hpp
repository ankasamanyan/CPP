#ifndef	CLAPTRAP_HPP
	#define CLAPTRAP_HPP
#include <iostream>
#include "Colours.h"

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints; //lives // red
		int			_energyPoints; //need to do spells //blue
		int			_attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string	const &name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap   &operator=(const ClapTrap &copy);
		~ClapTrap();
	/* */
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif