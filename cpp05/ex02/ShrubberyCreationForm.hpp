#ifndef SHRUBBERY_CREATION_FORM
	#define SHRUBBERY_CREATION_FORM
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
};

#endif