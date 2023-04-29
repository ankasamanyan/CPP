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
		virtual ~AForm();
		/* member functions */
		const std::string	getName() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		bool				getSigned() const;
		void				beSigned(Bureaucrat &borya);
		virtual void		execute(Bureaucrat const &borya) const = 0;
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