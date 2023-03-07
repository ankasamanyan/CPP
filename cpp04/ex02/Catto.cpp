#include "Catto.hpp"

Catto::Catto()
{
	_cattoBrain = new Brain;
	_type = "Catto";
	std::cout << PURPLE << "Default Catto constructor called" << RESET_LINE;
}

Catto::Catto(const Catto &copy)
{
	*this = copy;
	std::cout << PURPLE << "Copy Catto constructor called" << RESET_LINE;
}

Catto	&Catto::operator=(const Catto &copy)
{
	_type = copy._type;
	return (*this);
}

Catto::~Catto()
{
	delete(_cattoBrain);
	std::cout << PURPLE << "Catto destructor called" << RESET_LINE;
}

void	Catto::makeSound() const
{
	std::cout << PURPLE << "* Depressed Catto sounds *" << RESET_LINE; 
}

void	Catto::setIdea(int index, std::string	idea)
{
	if (index < 100)
		_cattoBrain->getIdea(index) = idea;
	else
		std::cout << PINK << "Your index does not exist" << RESET_LINE;
}

std::string	Catto::getIdea(int index)
{
	if (index < 100)
			return(_cattoBrain->getIdea(index));
		else
			return("Your index does not exist");
}