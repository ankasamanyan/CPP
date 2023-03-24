#ifndef ROBOTOMY_REQUEST_FORM_HPP
	#define ROBOTOMY_REQUEST_FORM_HPP
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
};


#endif