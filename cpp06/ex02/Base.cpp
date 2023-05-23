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
		std::cout << std::string(45, '-') << RESET_LINE << PURPLE << "The program generated:\t\t"<< GREEN <<  "Class A" << RESET_LINE;
		return (new ClassA);
	case 2:
		std::cout << std::string(45, '-') << RESET_LINE << PURPLE << "The program generated:\t\t"<< YELLOW <<  "Class B" << RESET_LINE;
		return (new ClassB);
	default :
		std::cout << std::string(45, '-') << RESET_LINE << PURPLE << "The program generated:\t\t"<< SKY <<  "Class C" << RESET_LINE;
		return (new ClassC);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<ClassA *>(p))
		std::cout  << std::string(45, '-') << RESET_LINE << PURPLE << "Identification by pointer:	" << GREEN <<  "Class A" << RESET_LINE;
	else if (dynamic_cast<ClassB *>(p))
		std::cout  << std::string(45, '-') << RESET_LINE << PURPLE << "Identification by pointer:	" << YELLOW <<  "Class B" << RESET_LINE;
	else if (dynamic_cast<ClassC *>(p))
		std::cout << std::string(45, '-') << RESET_LINE << PURPLE << "Identification by pointer:	" << SKY <<  "Class C" << RESET_LINE;
}

void	identify(Base &p)
{

	Base ref;
	try
	{	
		ref = dynamic_cast<ClassA&>(p);
		std::cout << std::string(45, '-') << RESET_LINE << PURPLE << "Identification by reference:	" << GREEN <<  "Class A" << RESET_LINE;
		std::cout << std::string(45, '-') << RESET_LINE;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		ref = dynamic_cast<ClassB&>(p);
		std::cout << std::string(45, '-') << RESET_LINE << PURPLE << "Identification by reference:	" << YELLOW <<  "Class B" << RESET_LINE;
		std::cout << std::string(45, '-') << RESET_LINE;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		ref = dynamic_cast<ClassC&>(p);
		std::cout << std::string(45, '-') << RESET_LINE << PURPLE << "Identification by reference:	" << SKY <<  "Class C" << RESET_LINE;
		std::cout << std::string(45, '-') << RESET_LINE;
	}
	catch (std::bad_cast &bc)
	{
	}
	
}