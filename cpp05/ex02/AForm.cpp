#include "AForm.hpp"

AForm::AForm():
	_name("name"),
	_gradeSign(150),
	_gradeExec(150)
{
	_signed = false;
}

AForm::AForm(const std::string &name, int gradeSign, int gradeExec):
	_name(name),
	_gradeSign(gradeSign),
	_gradeExec(gradeExec)
{
	_signed = false;
	if (gradeSign < 1 || gradeExec < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy):
	_name(copy._name),
	_gradeSign(copy._gradeSign),
	_gradeExec(copy._gradeExec)
{
	*this = copy;
}

AForm	&AForm::operator=(const AForm &copy)
{
	_signed = copy._signed;
	return (*this);
}

AForm::~AForm()
{
}

/* getters */

const std::string	AForm::getName()
{
	return(_name);
}

int	AForm::getGradeSign()
{
	return(_gradeSign);
}

int	AForm::getGradeExec()
{
	return(_gradeExec);
}

bool	AForm::getSigned()
{
	return(_signed);
}


/*  */

void	AForm::beSigned(Bureaucrat &borya)
{
	if (borya.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

/* exceptons */
const char *AForm::GradeTooHighException::what() const throw()
{
	return("\033[0;33mBureaucrat's grade is too high!\033[0m");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return("\033[0;33mBureaucrat's grade is too low\033[0m");
}

/* stream operator */
std::ostream &operator<<(std::ostream &stream, AForm &AForm)
{
	stream << SKY << AForm.getName() << PINK << " AForm is " << SKY << (AForm.getSigned()? "signed" : "not signed") << RESET_LINE ;
	stream << PINK << "Grade required to sign it: " << SKY << AForm.getGradeSign() << RESET_LINE;
	stream << PINK << "Grade required to execute it: " << SKY << AForm.getGradeExec() << RESET;
	return(stream);
}