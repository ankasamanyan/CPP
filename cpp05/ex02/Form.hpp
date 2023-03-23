#ifndef FORM_HPP
	#define FORM_HPP
#include <iostream>
#include "Colours.h"
#include "Bureaucrat.hpp"
class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExec;
	public:
		Form();
		Form(const std::string &name, int sign, int exec);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form();

		/* member functions */
		const std::string	getName();
		int					getGradeSign();
		int					getGradeExec();
		bool				getSigned();
		/*  */
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

std::ostream &operator<<(std::ostream &stream, Form &form);

#endif