#ifndef PRESIDENTIAL_PARDON_FORM_HPP
	#define PRESIDENTIAL_PARDON_FORM_HPP
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string	_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string	&target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
	~PresidentialPardonForm();
	/* */
	void	execute(const Bureaucrat &borya) const;

};



#endif