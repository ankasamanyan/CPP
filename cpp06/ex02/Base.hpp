#ifndef BASE_HPP
	#define BASE_HPP
#include <iostream>
#include <exception>
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
class Base
{
	public:
		virtual ~Base();
	/* member functions */
		Base *generate(void);
		void identify(Base* p);
		void identify(Base& p);
};



#endif