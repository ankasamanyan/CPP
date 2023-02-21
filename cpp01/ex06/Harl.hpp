#ifndef HARL_HPP
	#define HARL_HPP
#include <iostream>
#include "Colours.h"

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl();
		~Harl();
	public:
		void    complain( std::string level);
};


#endif