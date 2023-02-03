#include <string>
#include <iostream>
# define RESET		"\033[0m"
# define SKY		"\033[0;36m"
# define YELLOW		"\033[0;33m"
#define RESET_LINE 	RESET << std::endl

int main(int argc, char const *argv[])
{
	std::string::iterator	_ter;
	std::string::iterator	iter_;
	std::string				stringy;

	if (argc < 2)
	{
		std::cout << YELLOW << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << RESET_LINE;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		stringy.append(argv[i]);
		// if (i != argc -1)
		// 	stringy.append(" ");
	}
	_ter = stringy.begin();
	iter_ = stringy.end();
	for (; _ter < iter_; _ter++)
	{
		if (*_ter >= 'a' && *_ter <= 'z')
			*_ter -= 32;
	}
	std::cout << SKY << stringy << RESET_LINE;
	return (0);
}
