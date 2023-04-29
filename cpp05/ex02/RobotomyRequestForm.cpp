#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	AForm("Robotomy request", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string	&target):
	AForm("Robotomy request", 72, 45),
	_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	_target = copy._target;
	return(*this);
}


RobotomyRequestForm::~RobotomyRequestForm()
{
}

/* */
void	RobotomyRequestForm::execute(const Bureaucrat &borya) const
{
	std::cout << borya.getNAme() << " executed" << getName() << RESET_LINE;
}