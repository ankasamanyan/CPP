#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	AForm("Presidentioal pardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string	&target):
	AForm("Presidentioal pardon", 25, 5),
	_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): 
	AForm(copy.getName(), 25, 5),
	_target(copy._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	_target = copy._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/* */
void	PresidentialPardonForm::execute(const Bureaucrat &borya) const
{
	if (borya.getGrade() <= getGradeExec() && getSigned())
	{
		std::cout << YELLOW << _target << PINK << " has been pardoned" << SKY << " by Zaphod Beeblebrox" << RESET_LINE;
		std::cout << SKY <<borya.getNAme() << PINK << " executed " << SKY << getName() << RESET_LINE;
	}
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