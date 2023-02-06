#include "PhoneBook.hpp"

void	PhoneBook::addContact(void)
{
	std::string	temp;

    std::cout << PINK << "Gimme Name!" << RESET_LINE;
	std::cin >> temp;
	std::cout << SKY << "Dis da temp " << RESET << temp << std::endl;
}

PhoneBook::PhoneBook(/* args */)
{
	(void)_Kontakte;
}

PhoneBook::~PhoneBook()
{
}