#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include "Colours.h"

class Contact
{
	public:
		Contact(void);
		Contact(const std::string name, const std::string surname, const std::string nickname, const std::string number, const std::string secret);
		~Contact();

	private:
		const std::string _firstName;
		const std::string _lastName;
		const std::string _nickName;
		const std::string _phoneNumber;
		const std::string _darkestSecret;

	public:
		void	printSingleContact();
		void	printNames();
};

#endif