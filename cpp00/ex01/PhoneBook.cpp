#include "PhoneBook.hpp"

void	PhoneBook::addContact(void)
{
	std::string	name;
	std::string	surname;
	std::string	nickname;
	std::string	number;
	std::string	secret;

    std::cout << PINK << "Gimme Name!" << RESET_LINE;
	std::getline(std::cin, name);
	// std::cin >> name;
	// std::cout << SKY << "Dis da temp " << RESET << temp << std::endl;
    std::cout << PINK << "Gimme Surname!" << RESET_LINE;
	std::getline(std::cin, surname);
	// std::cin >> surname;
	// std::cout << SKY << "Dis da temp " << RESET << temp << std::endl;
    std::cout << PINK << "Gimme Nickname!" << RESET_LINE;
	std::getline(std::cin, nickname);
	// std::cin >> nickname;
	// std::cout << SKY << "Dis da temp " << RESET << temp << std::endl;
    std::cout << PINK << "Gimme Number!" << RESET_LINE;
	std::getline(std::cin, number);
	// std::cin >> number;
	// std::cout << SKY << "Dis da temp " << RESET << temp << std::endl;
    std::cout << PINK << "Gimme Secret!" << RESET_LINE;
	std::getline(std::cin, secret);
	// std::cin >> secret;			//just takes first word
	// std::cout << SKY << "Dis da temp " << RESET << temp << std::endl;

	Contact	kontakt(name, surname, nickname, number, secret);
	_Kontakte[0] = &kontakt;
	_Kontakte[0]->printSingleContact();

	//how do I put contact info to class contact
}

PhoneBook::PhoneBook(/* args */)
{
	// (void)_Kontakte;
	std::cout << YELLOW << "halp" << RESET_LINE;
}

PhoneBook::~PhoneBook()
{
}