#include "Contact.hpp"


Contact::Contact(/* args */)
{
	// std::cout << YELLOW << "DEFAULT constructor called für class CONTACT"<< RESET_LINE;
}

Contact::Contact(const std::string firstName, const std::string lastName, const std::string nickName, const std::string  phoneNumber, const std::string darkestSecret) : _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
	// std::cout << GREEN << "NOT default constructor called für class CONTACT"<< RESET_LINE;
}

Contact::~Contact()
{
	// std::cout << RED << "Default DEconstructor called für class CONTACT"<< RESET_LINE;
}

void	Contact::printSingleContact()
{
	std::cout << SKY << "First Name:	|	" << RESET;
	std::cout << (_firstName.size() > 10 ? (_firstName.substr(0,9)).append(".") : _firstName) << RESET_LINE;
	std::cout << SKY << "Last Name:	|	" << RESET;
	std::cout << (_lastName.size() > 10 ? (_lastName.substr(0,9)).append(".") : _lastName) << RESET_LINE;
	std::cout << SKY << "Nickname:	|	" << RESET;
	std::cout << (_nickName.size() > 10 ? (_nickName.substr(0,9)).append(".") : _nickName) << RESET_LINE;
	std::cout << SKY << "Phone Number:	|	" << RESET;
	std::cout << (_phoneNumber.size() > 10 ? (_phoneNumber.substr(0,9)).append(".") : _phoneNumber) << RESET_LINE;
	std::cout << SKY << "Darkest secret:	|	" << RESET;
	std::cout << (_darkestSecret.size() > 10 ? (_darkestSecret.substr(0,9)).append(".") : _darkestSecret) << RESET_LINE;
}

void	Contact::printNames()
{
	std::cout << (_firstName.size() > 10 ? (_firstName.substr(0,9)).append(".") : _firstName) << "	| ";
	std::cout << (_lastName.size() > 10 ? (_lastName.substr(0,9)).append(".") : _lastName) << "	| ";
	std::cout << (_nickName.size() > 10 ? (_nickName.substr(0,9)).append(".") : _nickName) << std::endl;
}
