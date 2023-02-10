#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include "Colours.h"

class Contact
{

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	private:
		std::string appendSpaces(std::string stringy);
	public:
		Contact(void);
		Contact(const std::string name, const std::string surname, const std::string nickname, const std::string number, const std::string secret);
		~Contact();

	public:
		void	printSingleContact();
		void	printNames();
};

#endif