#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name)
{
	_name = name;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	_name = copy._name;
	_grade = copy._grade;
	return(*this);
}

Bureaucrat::~Bureaucrat()
{
}


/* */
const std::string	Bureaucrat::getNAme()
{
	return(_name);
}

int		Bureaucrat::getGrade()
{
	return(_grade);
}

void	Bureaucrat::increaseGrade()
{
	if (_grade == 1)
		throw Bureaucrat::exeption;
}
