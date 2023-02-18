#ifndef HUMAN_B_HPP
	#define HUMAN_B_HPP
#include <iostream>
#include "Weapon.hpp"
#include "Colours.h"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		void	setWeapon(Weapon &weapony);
		void    attack(void);

	public:
		HumanB(std::string name);
		~HumanB();
};



#endif