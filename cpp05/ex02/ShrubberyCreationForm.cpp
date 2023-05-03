#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("Shrubbery creation", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
	AForm("Shrubbery creation", 145, 137),
	_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
	AForm(copy.getName(), 145, 137),
	_target(copy._target)
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
void	ShrubberyCreationForm::execute(const Bureaucrat &borya) const
{
	if (borya.getGrade() <= getGradeExec() && getSigned())
	{
		std::ofstream outfile(_target + "_shrubbery");
		if (outfile.is_open())
		{
			outfile <<   "  ,d" << std::endl                                   
						<<"  88" << std::endl                                      
					  <<"MM88MMM 8b,dPPYba,  ,adPPYba,  ,adPPYba," << std::endl  
						<<"  88    88P    Y8  a8P_____88 a8P_____88" << std::endl  
						<<"  88    88         8PP°°°°°°° 8PP°°°°°°°" << std::endl  
						<<"  88,   88         '8b,   ,aa '8b,   ,aa" << std::endl  
						<<"  'Y888 88          `'Ybbd8''  `'Ybbd8''" << std::endl;
			outfile.close();
			std::cout << SKY <<borya.getNAme() << PINK << " executed " << SKY << getName() << PINK << " on " << SKY << _target + "_shrubbery" << "!" << RESET_LINE;
		}
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