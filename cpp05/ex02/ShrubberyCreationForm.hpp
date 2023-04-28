#ifndef SHRUBBERY_CREATION_FORM
	#define SHRUBBERY_CREATION_FORM
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string	&target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		/* */
		void	executeTatsaechlich(const Bureaucrat &borya) const;
};

#endif