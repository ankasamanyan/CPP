#ifndef AFORM_HPP
	#define AFORM_HPP
#include <iostream>
#include "Colours.h"
#include "Bureaucrat.hpp"
class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExec;
	public:
		AForm();
		AForm(const std::string &name, int sign, int exec);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);
		~AForm();
		/* member functions */
		const std::string	getName();
		int					getGradeSign();
		int					getGradeExec();
		bool				getSigned();
		void				beSigned(Bureaucrat &borya);
		/* exceptions */
		class	GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &stream, AForm &form);

#endif