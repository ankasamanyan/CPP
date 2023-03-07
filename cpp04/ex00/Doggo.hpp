#ifndef DOGGO_HPP
	#define DOGGO_HPP
#include "Animal.hpp"

class Doggo: public Animal
{
	private:

	public:
		Doggo();
		Doggo(const Doggo &copy);
		Doggo	&operator=(const Doggo &copy);
		~Doggo();

		void	makeSound() const;
};

#endif