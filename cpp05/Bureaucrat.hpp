#ifndef BUREAUCRAT_HPP
	#define BUREAUCRAT_HPP
#include <iostream>
#include "Colours.h"

class Bureaucrat
{
	private:
		const std::string	_name; //& ?
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		std::ostream	   &operator<<(std::exception	exception);
		~Bureaucrat();
		/* member functions */
		const std::string	getNAme();
		int					getGrade();
		void				increaseGrade();
		void				decreaseGrade();

		class	GradeTooHighException: public std::exception
		{
			public:
				const char *what() const thow()
				{
					return ""
				}
		}

};


#endif