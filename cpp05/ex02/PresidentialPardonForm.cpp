#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidentioal pardon", 25, 5)
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
