#include "ClapTrap.hpp"

/*  */
ClapTrap::ClapTrap()
{
	_name = "Catto";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << GREEN << "Default Claptrap constructor called" << RESET_LINE;
}

ClapTrap::ClapTrap(std::string const &name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << GREEN << "Default Claptrap <string> constructor called" << RESET_LINE;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << GREEN << "Default Claptrap copy constructor called" << RESET_LINE;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << GREEN << "Default Claptrap assignment operator called" << RESET_LINE;
	return (*this);
}


ClapTrap::~ClapTrap()
{
	std::cout << GREEN << "Default Claptrap destructor called" << RESET_LINE;
}

/*	*/

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 &&  _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << RESET_LINE; 
		_energyPoints -= 1;
	}
	else if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " cannot do things, because died " << RESET_LINE;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " cannot do things, because depressed :(" << RESET_LINE;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " took " << amount << " damage!"<< RESET_LINE;
		std::cout << "Current hitPoints: " << _hitPoints << RESET_LINE;
	}
	else
		std::cout << "Stop, he's already dead!" << RESET_LINE;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints < 0)
	{
		std::cout << "ClapTrap " << _name << "cannot do things, because died" << RESET_LINE;
		return ;
	}
	if (_energyPoints < 0)
	{
		std::cout << "ClapTrap " << _name << "cannot do things, because depressed" << RESET_LINE;
		return ;
	}
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " healed " << amount << " damage!"<< RESET_LINE;
	std::cout << "Current hitPoints: " << _hitPoints << RESET_LINE;
}

