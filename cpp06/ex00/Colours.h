#ifndef	COLOURS_H
	#define COLOURS_H
#include <iostream>
# define CPP_IS_PAIN	1
# define RESET			"\033[0m"
# define BLACK			"\033[0;30m"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define YELLOW			"\033[0;33m"
# define PURPLE			"\033[0;34m"
# define PINK			"\033[0;35m"
# define SKY			"\033[0;36m"
# define ON_RED 		"\033[41m"
# define ON_PURPLE		"\033[44m"
# define ON_PINK		"\033[45m"
# define RESET_LINE 	RESET << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

void	printMsg(std::string stringy, std::string colour);

#endif
