// #include <string>
#include <iostream>
#include "Colours.h"

class PhoneBook
{
	// private:
	// 	/* data */
		int	a;
	public:
		PhoneBook(/* args */);
	~PhoneBook();
	public:
		void	halp(void)
		{
			std::cout << a << std::endl;
		}
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}
