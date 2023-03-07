#ifndef CATTO_HPP
	#define CATTO_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Catto: public AAnimal
{
	private:
		Brain	*_cattoBrain;
	public:
		Catto();
		Catto(const Catto &copy);
		Catto	&operator=(const Catto &copy);
		~Catto();
		/* member function */
		void		makeSound() const;
		void		setIdea(int index, std::string	idea);
		std::string	getIdea(int index);
};

#endif