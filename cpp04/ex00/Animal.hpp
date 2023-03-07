#ifndef ANIMAL_HPP
	#define ANIMAL_HPP
#include <iostream>
#include "Colours.h"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &copy);
		Animal	&operator=(const Animal &copy);
		virtual ~Animal();
		/* member function */
		virtual void				makeSound() const;
		const std::string	&getType()	const;
};

#endif