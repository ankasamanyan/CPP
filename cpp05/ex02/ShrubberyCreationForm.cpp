#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery creation", 145, 137),
{
}

// ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery creation", 145, 137),
// {
// }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):AForm(copy)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	_target = copy._target;
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

