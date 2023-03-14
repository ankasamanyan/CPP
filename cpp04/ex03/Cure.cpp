#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
}

Cure	&Cure::operator=(const Cure &copy)
{
	_type = copy._type;
	return(*this);
}

Cure::~Cure()
{
}

AMateria	*Cure::clone() const
{
	AMateria	*clone;

	clone = new Cure();
	return (clone);
}

void 	Cure::use(ICharacter &target)
{
	std::cout << PINK << "* heals "<< SKY << target << PINK << "'s wounds *" << RESET_LINE;
}
