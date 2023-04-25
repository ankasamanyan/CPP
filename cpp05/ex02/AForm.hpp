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
		virtual AForm(const std::string &name, int sign, int exec);
		virtual AForm(const AForm &copy);
		virtual AForm &operator=(const AForm &copy);
		virtual ~AForm();
		/* member functions */
		const std::string	getName();
		int					getGradeSign();
		int					getGradeExec();
		bool				getSigned();
		void				beSigned(Bureaucrat &borya);
		void				execute(Bureaucrat const & executor) const;
		virtual void		executeTatsaechlich(void) = 0;
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