#ifndef CHARACTER_HPP
	#define CHARACTER_HPP
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
class Character: public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_inventory[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character &copy);
		Character &operator=(const Character &copy);
		~Character();
};

#endif