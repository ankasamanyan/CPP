#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Catto.hpp"
#include "WrongCatto.hpp"
#include "Doggo.hpp"

int main()
{
	const Animal*		meta = new Animal();
	const Animal*		j = new Doggo();
	const Animal*		i = new Catto();
	const WrongAnimal*	c = new WrongCatto();

	std::cout << PINK << j->getType() << std::endl;
	std::cout << PINK << i->getType() << std::endl;
	std::cout << PINK << c->getType() << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	c->makeSound();
	/* distruction */
	delete(meta);
	delete(i);
	delete(j);
	delete(c);
	return (0);
}