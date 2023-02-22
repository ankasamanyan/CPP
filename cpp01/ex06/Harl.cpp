#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	printMsg("DEBUG", GREEN);
	std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-" << std::endl;
	std::cout << "triple-pickle-special- ketchup burger. I really do!" << RESET_LINE;
}

void Harl::info(void)
{
	printMsg("INFO", SKY);
	std::cout << SKY << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did," << std::endl;
	std::cout << "I wouldn't be asking for more!" << RESET_LINE;
}

void Harl::warning(void)
{
	printMsg("WARNING", YELLOW);
	std::cout << YELLOW << "This is unacceptable! I want to speak to the" << std::endl;
	std::cout << "manager now." << RESET_LINE;
}

void Harl::error(void)
{
	printMsg("ERROR", PINK);
	std::cout << PINK << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started" << std::endl;
	std::cout << "working here since last month." << std::endl << RESET_LINE;
}

void    Harl::complain( std::string level )
{
	void		(Harl::*complainTingy[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string	complains[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	for (size_t i = 0; i < 4; i++)
	{
		if (level.compare(complains[i]) == 0)
		{
			switch (i)
			{
				case 0:
					while (i < 4)
						(this->*complainTingy[i++])();
					return;
				case 1:
					while (i < 4)
						(this->*complainTingy[i++])();
					return;
				case 2:
					while (i < 4)
						(this->*complainTingy[i++])();
					return;
				case 3:
					while (i < 4)
						(this->*complainTingy[i++])();
					return;
			}
			break;
		}
	}
		printMsg("Complaining about problems", PURPLE);
	
}

void	printMsg(std::string stringy, std::string colour)
{
	std::cout << std::endl << colour << "+" << std::string(49, '=') << "+" << RESET_LINE;
	std::cout << RESET << (stringy.size() > 16 ? "	" : "		");
	std::cout<< "..." << stringy << "..." << RESET_LINE;
	std::cout << colour << "+" << std::string(49, '=') << "+" << std::endl << RESET_LINE;
}