#ifndef PRESIDENTIAL_PARDON_FORM_HPP
	#define PRESIDENTIAL_PARDON_FORM_HPP
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string	_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
	~PresidentialPardonForm();
};



#endif