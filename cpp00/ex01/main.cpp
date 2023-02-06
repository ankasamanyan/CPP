#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook	Book;
	Contact	NotContacts("Cedric Pascal", "Erdelen", "SealRick", "666", "Стол по-немецки тиш!");

	// NotContacts.printSingleContact();
	// NotContacts.printNames();
	Book.addContact();

	// std::string	stringy = "This is stringy";
	// PhoneBook lol;
	// lol.halp();
	// std::cout << PINK << stringy << RESET_LINE;
	return 0;
}