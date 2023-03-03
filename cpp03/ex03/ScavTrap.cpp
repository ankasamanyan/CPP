#include "ScavTrap.hpp"

/*  */
ScavTrap::ScavTrap()
{
	_name = "Catto";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << GREEN << "Default ScavTrap constructor called" << RESET_LINE;
}

ScavTrap::ScavTrap(std::string const &name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << GREEN << "Default ScavTrap <string> constructor called" << RESET_LINE;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << GREEN << "Default ScavTrap copy constructor called" << RESET_LINE;
}

ScavTrap   &ScavTrap::operator=(const ScavTrap &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << GREEN << "Default ScavTrap assignment operator called" << RESET_LINE;
	return (*this);
}


ScavTrap::~ScavTrap()
{
	std::cout << GREEN << "Default ScavTrap destructor called" << RESET_LINE;
}

/*	*/
void ScavTrap::guardGate()
{
	if (_hitPoints > 0 &&  _energyPoints > 0)
	{
		std::cout << GREEN << "ScavTrap is now in Guard mode!" << RESET_LINE; 
		_energyPoints -= 1;
	}
	else if (_hitPoints <= 0)
		std::cout << GREEN << "ScavTrap " << SKY << _name << " cannot do things, because died " << RESET_LINE;
	else if (_energyPoints <= 0)
		std::cout << GREEN << "ScavTrap " << SKY << _name << " cannot do things, because depressed :(" << RESET_LINE;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 &&  _energyPoints > 0)
	{
		std::cout << GREEN << "ScavTrap " << SKY << _name << GREEN << " attacks " << SKY  << target << GREEN << ", causing " << _attackDamage << " points of damage!" << RESET_LINE; 
		_energyPoints -= 1;
	}
	else if (_hitPoints <= 0)
		std::cout << GREEN << "ScavTrap " << SKY << _name << GREEN << " cannot do things, because died " << RESET_LINE;
	else if (_energyPoints <= 0)
		std::cout << GREEN << "ScavTrap " << SKY << _name << GREEN << " cannot do things, because depressed :(" << RESET_LINE;
}
