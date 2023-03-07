#ifndef BRAIN_HPP
	#define BRAIN_HPP
#include <iostream>
#include "Colours.h"

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		Brain	&operator=(const Brain &copy);
		~Brain();
		/* member function */
		std::string	&getIdea(int index);


		
	
};



#endif