#ifndef ROBOTOMY_REQUEST_FORM_HPP
	#define ROBOTOMY_REQUEST_FORM_HPP
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string	_target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string	&target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
		/* */
		void	executeTatsaechlich(const Bureaucrat &borya) const;
	
};


#endif