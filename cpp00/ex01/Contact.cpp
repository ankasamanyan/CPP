#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(const std::string firstName, const std::string lastName, const std::string nickName, const std::string  phoneNumber, const std::string darkestSecret) : _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
}

Contact::~Contact()
{
}

void	Contact::printSingleContact()
{
	std::cout << SKY << "First Name:	|	" << RESET << _firstName << RESET_LINE;
	std::cout << SKY << "Last Name:	|	" << RESET << _lastName << RESET_LINE;
	std::cout << SKY << "Nickname:	|	" << RESET << _nickName << RESET_LINE;
	std::cout << SKY << "Phone Number:	|	" << RESET << _phoneNumber << RESET_LINE;
	std::cout << SKY << "Darkest secret:	|	" << RESET << _darkestSecret << RESET_LINE;
	// std::cout << (_firstName.size() > 10 ? (_firstName.substr(0,9)).append(".") : _firstName) << RESET_LINE;
	// std::cout << SKY << "Last Name:	|	" << RESET;
	// std::cout << (_lastName.size() > 10 ? (_lastName.substr(0,9)).append(".") : _lastName) << RESET_LINE;
	// std::cout << SKY << "Nickname:	|	" << RESET;
	// std::cout << (_nickName.size() > 10 ? (_nickName.substr(0,9)).append(".") : _nickName) << RESET_LINE;
	// std::cout << SKY << "Phone Number:	|	" << RESET;
	// std::cout << (_phoneNumber.size() > 10 ? (_phoneNumber.substr(0,9)).append(".") : _phoneNumber) << RESET_LINE;
	// std::cout << SKY << "Darkest secret:	|	" << RESET;
	// std::cout << (_darkestSecret.size() > 10 ? (_darkestSecret.substr(0,9)).append(".") : _darkestSecret) << RESET_LINE;
}

void	Contact::printNames()
{
	std::cout << "  " << appendSpaces(_firstName);
	std::cout << (_firstName.size() > 10 ? (_firstName.substr(0,9)).append(".") : _firstName) << " |";
	std::cout << "  " << appendSpaces(_lastName);
	std::cout << (_lastName.size() > 10 ? (_lastName.substr(0,9)).append(".") : _lastName) << " |";
	std::cout <<  "  " << appendSpaces(_nickName);
	std::cout << (_nickName.size() > 10 ? (_nickName.substr(0,9)).append(".") : _nickName) << std::endl;
}


std::string Contact::appendSpaces(std::string stringy)
{
	int	amount = 0;

	if ( stringy.size() < 10 )
		amount = 10 - stringy.size();
	stringy.clear();
	for (int i = 0; i < amount; i++)
		stringy.append(" ");
	return (stringy);
}
