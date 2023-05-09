#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern	&Intern::operator=(const Intern &copy)
{
	(void)copy;
	return(*this);
}

Intern::~Intern()
{
}

/* member functions */

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = 
	{
		"Presidential Pardon",
		"Robotomy request",
		"Shrubbery creation"
	};
	size_t i = 0;
	for (; i < 3; i++)
	{
		if (name.compare(forms[i]) == 0)
		{
			switch (i)
			{
				case 0:
					std::cout << PURPLE << "Intern created " << YELLOW << forms[0] << RESET_LINE;
					return(new PresidentialPardonForm(target));
				case 1:
					std::cout << PURPLE << "Intern created " << YELLOW << forms[1] << RESET_LINE;
					return(new RobotomyRequestForm(target));
				case 2:
					std::cout << PURPLE << "Intern created " << YELLOW << forms[2] << RESET_LINE;
					return(new ShrubberyCreationForm(target));
			}
			break;
		}
	}
	if (i >= 3)
		printMsg("* No such form *", YELLOW);
	return(NULL);
}

void	printMsg(std::string stringy, std::string colour)
{
	std::cout << std::endl << colour << "+" << std::string(49, '=') << "+" << RESET_LINE;
	std::cout << RESET << (stringy.size() > 16 ? "	" : "		");
	std::cout<< "..." << stringy << "..." << RESET_LINE;
	std::cout << colour << "+" << std::string(49, '=') << "+" << std::endl << RESET_LINE;
}