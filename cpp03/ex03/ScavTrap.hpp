#ifndef SCAVTRAP_HPP
	#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap   &operator=(const ScavTrap &copy);
		~ScavTrap();
		/*  */
		void	guardGate();
		void	attack(const std::string& target);



};



#endif