#include "Contact.hpp"


Contact::Contact(/* args */)
{
	std::cout << YELLOW << "DEFAULT constructor called für class CONTACT"<< RESET_LINE;
}

Contact::Contact(const std::string firstName, const std::string lastName, const std::string nickName, const std::string  phoneNumber, const std::string darkestSecret) : _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
	std::cout << GREEN << "NOT default constructor called für class CONTACT"<< RESET_LINE;
}

Contact::~Contact()
{
	std::cout << RED << "Default DEconstructor called für class CONTACT"<< RESET_LINE;
}

void	Contact::printSingleContact()
{
	std::cout << SKY << "First Name:	" << RESET << _firstName << RESET_LINE;
	std::cout << SKY << "Last Name:	" << RESET << _lastName << RESET_LINE;
	std::cout << SKY << "Nickname:	" << RESET << _nickName << RESET_LINE;
	std::cout << SKY << "Phone Number:	" << RESET << _phoneNumber << RESET_LINE;
	std::cout << SKY << "Darkest secret:	"<< RESET << _darkestSecret << RESET_LINE;
}

void	Contact::printNames()
{
	std::cout << _firstName << "	|	" << _lastName << "	|	" << _nickName << std::endl;
}