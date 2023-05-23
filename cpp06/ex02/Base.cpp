#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <exception>


Base::~Base()
{
}

Base	*generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	switch (random)
	{
	case 1:
		return (new ClassA);
	case 2:
		return (new ClassB);
	default :
		return (new ClassC);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<ClassA *>(p))
		std::cout << GREEN <<  "Class A" << RESET_LINE;
	else if (dynamic_cast<ClassB *>(p))
		std::cout << PINK <<  "Class B" << RESET_LINE;
	else if (dynamic_cast<ClassC *>(p))
		std::cout << SKY <<  "Class C" << RESET_LINE;
}

void	identify(Base &p)
{

	Base ref;
	try
	{	
		ref = dynamic_cast<ClassA&>(p);
		std::cout << GREEN <<  "Class A" << RESET_LINE;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		ref = dynamic_cast<ClassB&>(p);
		std::cout << PINK <<  "Class B" << RESET_LINE;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		ref = dynamic_cast<ClassC&>(p);
		std::cout << SKY <<  "Class C" << RESET_LINE;
	}
	catch (std::bad_cast &bc)
	{
	}
	
}