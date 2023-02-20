#include "Colours.h"
#include <iostream>
#include <fstream>

void	printMsg(std::string stringy, std::string colour)
{
	std::cout << std::endl << colour << "+" << std::string(49, '=') << "+" << RESET_LINE;
	std::cout << RESET << (stringy.size() > 16 ? "	" : "		");
	std::cout<< "..." << stringy << "..." << RESET_LINE;
	std::cout << colour << "+" << std::string(49, '=') << "+" << RESET_LINE;
}

bool	wrongInput(int argc, char **argv, std::ifstream	&file)
{
	(void)argv;
	(void)file;
	// (void)newFile;
	if (argc != 4)
	{
		printMsg("Wrong number of arguments", PINK);
		return (true);
	}
	file.open(argv[1]);
	if (!file)
	{
		printMsg("No such file or directory", YELLOW);
		return (true);
	}
	return (false);	
}

int main(int argc, char  *argv[])
{
	std::ifstream	file;
	std::ofstream	newFile;

	
	if (wrongInput(argc, argv, file))
		return (0);
	newFile.open(std::string(argv[1]).append(".replace"));


	// std::cout << std::string (argv[1]).append(".replace") << std::endl;

	return (0);
}
