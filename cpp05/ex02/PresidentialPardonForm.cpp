#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidentioal pardon", 25, 5)
{
}
PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidentioal pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm(copy);
{
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	_target = copy._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/* */
void	PresidentialPardonForm::executeTatsaechlich(const Bureaucrat &borya) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << RESET_LINE;
	std::cout << borya.getNAme << " executed" << getName() << RESET_LINE;
}