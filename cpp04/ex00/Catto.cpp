#include "Catto.hpp"

Catto::Catto()
{
	_type = "Catto";
}

Catto::Catto(const Catto &copy)
{
	*this = copy;
}

Catto	&Catto::operator=(const Catto &copy)
{
	_type = copy._type;
	return (*this);
}

Catto::~Catto()
{
}

void	Catto::makeSound() const
{
	std::cout << PURPLE << "* Depressed Catto sounds *" << RESET_LINE; 
}