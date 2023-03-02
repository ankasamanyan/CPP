#include "FragTrap.hpp"

/*  */
FragTrap::FragTrap()
{
	_name = "Catto";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << GREEN << "Default FragTrap constructor called" << RESET_LINE;
}

FragTrap::FragTrap(std::string const &name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << GREEN << "Default FragTrap <string> constructor called" << RESET_LINE;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout << GREEN << "Default FragTrap copy constructor called" << RESET_LINE;
}

FragTrap   &FragTrap::operator=(const FragTrap &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << GREEN << "Default FragTrap assignment operator called" << RESET_LINE;
	return (*this);
}


FragTrap::~FragTrap()
{
	std::cout << GREEN << "Default FragTrap destructor called" << RESET_LINE;
}

/*	*/

void FragTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 &&  _energyPoints > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << RESET_LINE; 
		_energyPoints -= 1;
	}
	else if (_hitPoints <= 0)
		std::cout << "FragTrap " << _name << " cannot do things, because died " << RESET_LINE;
	else if (_energyPoints <= 0)
		std::cout << "FragTrap " << _name << " cannot do things, because depressed :(" << RESET_LINE;
}

void FragTrap::highFivesGuys(void)
{
	if (_hitPoints > 0 &&  _energyPoints > 0)
	{
		std::cout << "FragTrap wants to high five you now!" << RESET_LINE; 
		_energyPoints -= 1;
	}
	else if (_hitPoints <= 0)
		std::cout << "FragTrap " << _name << " cannot do things, because died " << RESET_LINE;
	else if (_energyPoints <= 0)
		std::cout << "FragTrap " << _name << " cannot do things, because depressed :(" << RESET_LINE;
}