#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	_type = "ice";
}

Ice::Ice(const Ice &copy)
{
	*this = copy;
}

Ice	&Ice::operator=(const Ice &copy)
{
	_type = copy._type;
	return(*this);
}

Ice::~Ice()
{
}

AMateria	*Ice::clone() const
{
	AMateria	*clone;

	clone = new Ice();
	return (clone);
}


void 		Ice::use(ICharacter &target)
{
	std::cout << PINK << "* shoots an ice bolt at " << SKY << target.getName() << PINK << " *" << RESET_LINE;
}
