#ifndef PHONE_BOOK_HPP
	#define PHONE_BOOK_HPP
#include <string>
#include <iostream>
#include "Colours.h"
#include "Contact.hpp"

class PhoneBook
{
	private:
		size_t		_inex;
	public:
		PhoneBook(/* args */);
	~PhoneBook();
	public:
		void	halp(void);
};

#endif