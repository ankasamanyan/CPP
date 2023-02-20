#include "Colours.h"
#include <iostream>
#include <fstream>

void	printMsg(std::string stringy, std::string colour)
{
	std::cout << std::endl << colour << "+" << std::string(49, '=') << "+" << RESET_LINE;
	std::cout << RESET << (stringy.size() > 16 ? "	" : "		");
	std::cout<< "..." << stringy << "..." << RESET_LINE;
	std::cout << colour << "+" << std::string(49, '=') << "+" << std::endl << RESET_LINE;
}

bool	wrongInput(int argc, char **argv, std::ifstream	&file)
{
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
	std::string		temp;
	std::string		fileContent;
	size_t			index = 0;

	if (wrongInput(argc, argv, file))
		return (0);
	newFile.open(std::string(argv[1]).append(".replace"));
	while(std::getline(file, temp))
		fileContent.append(temp + "\n");
	if (!fileContent.empty())
		fileContent.erase(fileContent.end() - 1);
	while (fileContent.find(argv[2], index) != std::string::npos)
	{
		index = fileContent.find(argv[2], index);
		fileContent.erase(fileContent.begin() + index, fileContent.begin() + index + std::string(argv[2]).length());
		fileContent.insert(index, std::string(argv[3]));
		index += std::string(argv[3]).length();
	}
	newFile << fileContent;
	return (0);
}
