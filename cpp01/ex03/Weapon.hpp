#ifndef WEAPON_HPP
	#define WEAPON_HPP
#include <iostream>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		~Weapon();
	public:
		const std::string	&getType();
		void				setType(const std::string &typey);
};

#endif