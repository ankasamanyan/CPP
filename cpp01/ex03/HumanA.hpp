#ifndef HUMAN_A_HPP
	#define HUMAN_A_HPP
#include <iostream>
#include "Weapon.hpp"
#include "Colours.h"

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon &weapony);
		~HumanA();
	public:
	void    attack(void);
};



#endif