#ifndef DIAMONDTRAP_HPP
	#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap 
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string const &name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap   &operator=(const DiamondTrap &copy);
		~DiamondTrap();
		/*  */
		using ScavTrap::attack;
		void whoAmI( void );
};




#endif