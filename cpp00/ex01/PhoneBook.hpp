#ifndef PHONE_BOOK_HPP
	#define PHONE_BOOK_HPP
#include <string>
#include <iostream>
#include "Colours.h"
#include "Contact.hpp"

class PhoneBook
{
	private:
		size_t		_amount;
		Contact		_Kontakte[8];
	private:
		void	pushContacts(Contact &data);
		void	noContacts();
		void	yesContacts(std::string stringy, std::string colour);
		size_t	valid(std::string &str);
	public:
		PhoneBook();
		~PhoneBook();
	public:
		void	addContact();
		void	searchContact();
};

/* helper */
void	instructions();

#endif