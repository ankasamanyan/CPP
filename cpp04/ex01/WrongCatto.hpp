#ifndef WRONGCATTO_HPP
	#define WRONGCATTO_HPP
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCatto: public WrongAnimal
{
	private:
		Brain	*_wrongCattoBrain;
	public:
		WrongCatto();
		WrongCatto(const WrongCatto &copy);
		WrongCatto	&operator=(const WrongCatto &copy);
		~WrongCatto();
		//**
		void	makeSound() const;
};

#endif