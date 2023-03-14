#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "Materia";
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;	
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	_type = copy._type;
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::~AMateria()
{
}

	/* member functions */

std::string const	&getType() const
{
	return(_type);
}

virtual AMateria	*AMateria::clone() const
{
	return(new AMateria);
}

void 		AMateria::use(ICharacter &target)
{
	// std::cout << PINK << "* Your target is " << SKY << target << PINK << " *" << RESET_LINE;
}
