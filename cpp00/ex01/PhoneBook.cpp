#include "PhoneBook.hpp"

void	PhoneBook::pushContacts(Contact &data)
{
	size_t i = _amount;
	if (i == 8)
		i--;
	while (i > 0)
	{
		_Kontakte[i] = _Kontakte[i - 1];
		i--;
	}
	_Kontakte[0] = data;
	_amount++;
}

void	PhoneBook::noContacts()
{
	yesContacts("NO CONTACTS IN YOUR PHONEBOOK", PINK);
}

void	PhoneBook::addContact()
{
	std::string	name;
	std::string	surname;
	std::string	nickname;
	std::string	number;
	std::string	secret;

	yesContacts("Enter Name", PINK);
	while(name.empty())
		std::getline(std::cin, name);
	yesContacts("Enter Surname", PINK);
	while(surname.empty())
		std::getline(std::cin, surname);
	yesContacts("Enter Nickname", PINK);
	while(nickname.empty())
		std::getline(std::cin, nickname);
	yesContacts("Enter Number", PINK);
	while(number.empty())
		std::getline(std::cin, number);
	yesContacts("Enter Your Darkest Secret", PINK);
	while(secret.empty())
		std::getline(std::cin, secret);

	Contact	kontakt(name, surname, nickname, number, secret);
	pushContacts(kontakt);
	// _Kontakte[0].printSingleContact();
}

void	PhoneBook::searchContact()
{
	std::string	input;
	size_t		index = 404;
	if(!_amount)
	{
		noContacts();
		return ;
	}
	else
		yesContacts("YOUR PHONEBOOK", PINK);
	for (size_t i = 0; i < _amount && i < 8; i++)
	{
		std::cout << PURPLE << "  " << i + 1 << RESET << "	|";
		_Kontakte[i].printNames();
	}
	yesContacts("Insert the index", PURPLE);
	while (index == 404)
	{
		while(input.empty())
			std::getline(std::cin, input);
		index = valid(input);
		if ( index > _amount )
		{
			yesContacts("ENTER VALID INDEX", PINK);
			input.clear();
			index = 404;
		}
	}
		yesContacts("YOUR PHONEBOOK", SKY);
		_Kontakte[index - 1].printSingleContact();
	std::cout << std::endl << std::endl;
}

size_t	PhoneBook::valid(std::string &str)
{
	if (str.size() != 1)
		return (404);
	else if (str[0] <= '0' || str[0] > '8')
		return (404);
	else
		return(str[0] - '0');
}

void	PhoneBook::yesContacts(std::string stringy, std::string colour)
{
	std::cout << std::endl << colour << "+=================================================+" << RESET_LINE;
	std::cout << RESET << (stringy.size() > 16 ? "	" : "		");
	std::cout<< "..." << stringy << "..." << RESET_LINE;
	std::cout << colour << "+=================================================+" << std::endl << RESET_LINE;
}

PhoneBook::PhoneBook()
{
	_amount = 0;
}

PhoneBook::~PhoneBook()
{
}