#ifndef AANIMAL_HPP
	#define AANIMAL_HPP
#include <iostream>
#include "Colours.h"

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal	&operator=(const AAnimal &copy);
		virtual ~AAnimal();
		/* member function */
		virtual void			makeSound() const = 0;
		const std::string		&getType()	const;
};

#endif