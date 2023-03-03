#include "DiamondTrap.hpp"

/*  */
DiamondTrap::DiamondTrap()
{
	_name = "Diamond";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << YELLOW << "Default DiamondTrap constructor called" << RESET_LINE;
}

DiamondTrap::DiamondTrap(std::string const &name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << YELLOW << "Default DiamondTrap <string> constructor called" << RESET_LINE;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	std::cout << YELLOW << "Default DiamondTrap copy constructor called" << RESET_LINE;
}

DiamondTrap   &DiamondTrap::operator=(const DiamondTrap &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << YELLOW << "Default DiamondTrap assignment operator called" << RESET_LINE;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << YELLOW << "Default DiamondTrap destructor called" << RESET_LINE;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << YELLOW << "DiamondTrap name: " << SKY << _name << RESET_LINE;
	std::cout << YELLOW << "ClapTrap name: " << SKY << ClapTrap::_name << RESET_LINE;
}
