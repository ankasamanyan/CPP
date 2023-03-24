#ifndef ROBOTOMY_REQUEST_HPP
	#define ROBOTOMY_REQUEST_HPP
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
};


#endif