#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("Robotomy request", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):AForm(copy)
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
