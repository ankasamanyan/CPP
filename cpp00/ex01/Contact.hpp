#ifndef CONTACT_HPP
	#define CONTACT_HPP
#include <string>
#include <iostream>
#include "Colours.h"

class Contact
{
    private:
		std::string _name;
        std::string _phoneNumber;
        // std::string name;
    public:
        void	setName(const std::string &name);
		void	setPhoneNumber(const std::string &name);

		Contact(/* args */);
		~Contact();
};

#endif