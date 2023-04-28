#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery creation", 145, 137),
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target):AForm("Shrubbery creation", 145, 137), _target(target)
{
}

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

/* */
void	ShrubberyCreationForm::executeTatsaechlich(const Bureaucrat &borya) const
{

}