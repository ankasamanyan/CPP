#include "Base.hpp"

Base::~Base()
{
}

Base *Base::generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	switch (random)
	{
	case 1:
		return Base *(new ClassA);
	case 2:
		return Base *(new ClassB);
	case 3:
		return Base *(new ClassC);
	}
}

void Base::identify(Base* p)
{

}

void Base::identify(Base& p)
{

}