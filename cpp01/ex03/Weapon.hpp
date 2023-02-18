#ifndef WEAPON_HPP
	#define WEAPON_HPP
#include <iostream>
#include "Colours.h"

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(const std::string &typey);
		~Weapon();
	public:
		const std::string	&getType();
		void				setType(const std::string &typey);
};

#endif