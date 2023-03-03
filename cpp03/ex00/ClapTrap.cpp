#include "ClapTrap.hpp"

/*  */
ClapTrap::ClapTrap()
{
	_name = "Clappy";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string const &name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return (*this);
}


ClapTrap::~ClapTrap()
{
}

/*	*/

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 &&  _energyPoints > 0)
	{
		std::cout << PINK << "ClapTrap " << SKY  << _name << PINK << " attacks " << SKY << target << PINK << ", causing " << SKY << _attackDamage << PINK <<" points of damage!" << RESET_LINE; 
		_energyPoints -= 1;
	}
	else if (_hitPoints <= 0)
		std::cout << PINK << "ClapTrap "  << SKY << _name  << PINK << " cannot do things, because died " << RESET_LINE;
	else if (_energyPoints <= 0)
		std::cout << PINK << "ClapTrap "  << SKY << _name  << PINK << " cannot do things, because depressed :(" << RESET_LINE;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << PINK << "ClapTrap " << SKY << _name << " took " << amount << " damage!"<< RESET_LINE;
		std::cout << PINK << "Current hitPoints: " << SKY << _hitPoints << RESET_LINE;
	}
	else
		std::cout << PINK << "Stop, he's already dead!" << RESET_LINE;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints < 0)
	{
		std::cout << PINK << "ClapTrap " << SKY << _name << "cannot do things, because died" << RESET_LINE;
		return ;
	}
	if (_energyPoints < 0)
	{
		std::cout << PINK << "ClapTrap " << SKY << _name << "cannot do things, because depressed" << RESET_LINE;
		return ;
	}
	_hitPoints += amount;
	std::cout << PINK << "ClapTrap " << SKY << _name << " healed " << amount << " damage!"<< RESET_LINE;
	std::cout << PINK << "Current hitPoints: " << SKY << _hitPoints << RESET_LINE;
}
