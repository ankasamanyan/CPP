#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook	Book;
	std::string	input;
	RE_TERMINAL;
	while (CPP_IS_PAIN)
	{
		instructions();
		while(input.empty())
			std::getline(std::cin, input);
		RE_TERMINAL;
		if(input.compare("-a") == 0)
			Book.addContact();
		if(input == "-s")
			Book.searchContact();
		else if (input.compare("-e") == 0)
			break;
		input.clear();
	}
	return 0;
}