#ifndef WRONGCATTO_HPP
	#define WRONGCATTO_HPP
#include "WrongAnimal.hpp"

class WrongCatto: public WrongAnimal
{
	private:

	public:
		WrongCatto();
		WrongCatto(const WrongCatto &copy);
		WrongCatto	&operator=(const WrongCatto &copy);
		~WrongCatto();
		//**
		void	makeSound() const;
};

#endif