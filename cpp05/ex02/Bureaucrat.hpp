#ifndef BUREAUCRAT_HPP
	#define BUREAUCRAT_HPP
#include <iostream>
#include "Colours.h"

class Form;
class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int	grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();
		/* member functions */
		const std::string	getNAme() const;
		int					getGrade() const;
		void				setGrade(int grade);
		void				increaseGrade();
		void				decreaseGrade();
		void				signForm(Form &form);
		void				executeForm(Form const & form);
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

std::ostream &operator<<(std::ostream &stream, Bureaucrat &bur);

#endif