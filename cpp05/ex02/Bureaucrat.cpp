#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade):_name(name)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):_name(copy._name)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	_grade = copy._grade;
	return(*this);
}

Bureaucrat::~Bureaucrat()
{
}

/*  */
const std::string	Bureaucrat::getNAme()
{
	return(_name);
}

int		Bureaucrat::getGrade()
{
	return(_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

void	Bureaucrat::increaseGrade()
{
	setGrade(_grade - 1);
}

void	Bureaucrat::decreaseGrade()
{
	setGrade(_grade + 1);
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << SKY << _name << YELLOW << " couldn't sign form '" << SKY << form.getName() << YELLOW << "' because "; 
		std::cerr << e.what() << '\n';
	}
	std::cout << SKY << _name << PINK << " signed '" << SKY << form.getName() << PINK << "' form" << RESET_LINE;
}

/* exceptions */

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("\033[0;33mBureaucrat's grade is too high!\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("\033[0;33mBureaucrat's grade is too low\033[0m");
}

/* stream operator */
std::ostream &operator<<(std::ostream &stream, Bureaucrat &bur)
{
	stream << SKY << bur.getNAme() << PINK << ", bureaucrat grade " << SKY << bur.getGrade() << RESET;
	return(stream);
}
