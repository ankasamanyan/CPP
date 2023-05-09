#ifndef INTERN_HPP
	#define INTERN_HPP
#include "AForm.hpp"
#include "Colours.h"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &copy);
		~Intern();
	/* member functions */
		AForm	*makeForm(std::string name, std::string target);
};



#endif