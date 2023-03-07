#ifndef CATTO_HPP
	#define CATTO_HPP
#include "Animal.hpp"

class Catto: public Animal
{
	private:

	public:
		Catto();
		Catto(const Catto &copy);
		Catto	&operator=(const Catto &copy);
		~Catto();
		//**
		void	makeSound() const;
};

#endif