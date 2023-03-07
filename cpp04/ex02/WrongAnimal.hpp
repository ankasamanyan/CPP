#ifndef WRONGANIMAL_HPP
	#define WRONGANIMAL_HPP
#include <iostream>
#include "Colours.h"

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal	&operator=(const WrongAnimal &copy);
		virtual ~WrongAnimal();
		/* member function */
		virtual void				makeSound() const;
		const std::string	&getType()	const;
};

#endif