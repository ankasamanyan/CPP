#ifndef CURE_HPP
	#define CURE_HPP
#include "AMateria.hpp"

class Cure: public AMateria
{
	private:

	public:
		Cure();
		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);
		~Cure();
		/* member function */
		AMateria	*clone() const;
		void 		use(ICharacter &target);
};

#endif