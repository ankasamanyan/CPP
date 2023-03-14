#ifndef ICE_HPP
	#define ICE_HPP
#include "AMateria.hpp"

class Ice: protected AMateria
{
	private:
		std::string		_type;
	public:
		Ice();
		Ice(const Ice &copy);
		Ice	&operator=(const Ice &copy);
		~Ice();
		/* member function */
		AMateria	*clone() const;
		void 		use(ICharacter &target);

};



#endif