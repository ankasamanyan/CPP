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

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):
	AForm(copy.getName(), 72, 45),
	_target(copy._target)
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
	if (borya.getGrade() <= getGradeExec() && getSigned())
		std::cout << SKY <<borya.getNAme() << PINK << " executed " << SKY << getName() << RESET_LINE;
	else
	{
		if (!getSigned())
		{
			std::cout << PINK << "¡Zis form '" << SKY << getName() << PINK << "' is not signed!" << RESET_LINE;
		}
		else
			throw AForm::GradeTooLowException();
	}
}