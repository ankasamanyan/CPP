#ifndef SHRUBBERY_CREATION_FORM
	#define SHRUBBERY_CREATION_FORM
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string	&target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		/* */
		void	execute(const Bureaucrat &borya) const;
};

#endif