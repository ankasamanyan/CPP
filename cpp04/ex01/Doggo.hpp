#ifndef DOGGO_HPP
	#define DOGGO_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Doggo: public Animal
{
	private:
		Brain	*_doggoBrain;
	public:
		Doggo();
		Doggo(const Doggo &copy);
		Doggo	&operator=(const Doggo &copy);
		~Doggo();
		/* member function */
		void		makeSound() const;
		void		setIdea(int index, std::string	idea);
		std::string	getIdea(int index);
};

#endif