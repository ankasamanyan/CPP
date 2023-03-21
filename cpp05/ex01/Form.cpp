#include "Form.hpp"

Form::Form():
	_name("name"),
	_gradeSign(150),
	_gradeExec(150)
{
	_signed = false;
}

Form::Form(const std::string &name, int gradeSign, int gradeExec):
	_name(name),
	_gradeSign(gradeSign),
	_gradeExec(gradeExec)
{
	_signed = false;
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy):
	_name(copy._name),
	_gradeSign(copy._gradeSign),
	_gradeExec(copy._gradeExec)
{
	*this = copy;
}

Form	&Form::operator=(const Form &copy)
{
	_signed = copy._signed;
	return (*this);
}

Form::~Form()
{
}

/* getters */

const std::string	Form::getName()
{
	return(_name);
}

int	Form::getGradeSign()
{
	return(_gradeSign);
}

int	Form::getGradeExec()
{
	return(_gradeExec);
}

bool	Form::getSigned()
{
	return(_signed);
}


/*  */

void	Form::beSigned(Bureaucrat &borya)
{
	if (borya.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();

}

/* exceptons */
const char *Form::GradeTooHighException::what() const throw()
{
	return("\033[0;33mBureaucrat's grade is too high!\033[0m");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("\033[0;33mBureaucrat's grade is too low\033[0m");
}

/* stream operator */
std::ostream &operator<<(std::ostream &stream, Form &form)
{
	stream << SKY << form.getName() << PINK << " form is " << SKY << (form.getSigned()? "signed" : "not signed") << RESET_LINE ;
	stream << PINK << "Grade required to sign it: " << SKY << form.getGradeSign() << RESET_LINE;
	stream << PINK << "Grade required to execute it: " << SKY << form.getGradeExec() << RESET;
	return(stream);
}