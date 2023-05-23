#ifndef BASE_HPP
	#define BASE_HPP

#include <iostream>
#include "Colours.h"
#include <exception>

class Base
{
	public:
		virtual ~Base();
	/* member functions */
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif