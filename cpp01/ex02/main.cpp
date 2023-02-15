#include <string>
#include <iostream>
# define PURPLE			"\033[0;34m"
# define SKY			"\033[0;36m"
# define RESET			"\033[0m"
# define YELLOW			"\033[0;33m"
# define PINK			"\033[0;35m"
# define RESET_LINE 	RESET << std::endl


int main()
{
	std::string stringy = "HI THIS IS BRAIN";
	std::string *stringyPTR = &stringy;
	std::string &stringyREF = stringy;

	std::cout << SKY << "  +==========================================================+" << RESET_LINE;
	std::cout << SKY << "  |" << YELLOW << "	Memory address of a string =		" << PURPLE << &stringy << SKY << "  |" << RESET_LINE;
	std::cout << SKY << "  |" << YELLOW << "	Memory address of string pointer =	" << PURPLE << stringyPTR << SKY << "  |"  << RESET_LINE;
	std::cout << SKY << "  |" << YELLOW << "	Memory address of string reference =	" << PURPLE << &stringyREF << SKY << "  |"  << RESET_LINE;
	std::cout << SKY << "  +==========================================================+" << RESET_LINE << std::endl;

	std::cout << SKY << "  +===============================================================+" << RESET_LINE;
	std::cout << SKY << "  |" << YELLOW << "	The value of the string variable =	" << PINK << stringy << SKY << "  |" << RESET_LINE;
	std::cout << SKY << "  |" << YELLOW << "	The value pointed to by the string =	" << PINK << *stringyPTR << SKY << "  |"  << RESET_LINE;
	std::cout << SKY << "  |" << YELLOW << "	The value pointed to by the string =	" << PINK << stringyREF << SKY << "  |"  << RESET_LINE;
	std::cout << SKY << "  +===============================================================+" << RESET_LINE << std::endl;
	return (0);
}
