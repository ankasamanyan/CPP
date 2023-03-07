#include "AAnimal.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "Catto.hpp"
#include "WrongCatto.hpp"
#include "Doggo.hpp"

int main() 
{
	AAnimal	*arr[4];

	for(int i = 0; i < 2; i++)
		arr[i] = new Doggo();
	for(int i = 2; i < 4; i++)
		arr[i] = new Catto();

	((Doggo *)arr[0])->setIdea(0, "This is a great Idea!");
	std::cout << std::endl << std:: endl << ((Doggo *)arr[0])->getIdea(0) << std::endl << std::endl;

	std::cout << std::endl << std:: endl << "this is the brain of copybefore :  " << ((Doggo *)arr[1])->getIdea(0) << std::endl << std::endl;
	*(Doggo *)arr[1] = *(Doggo *)arr[0];
	
	std::cout << std::endl << std:: endl << "this is the brain of copy:  " << ((Doggo *)arr[1])->getIdea(0) << std::endl << std::endl;

	for(int i = 0; i < 4; i++)
		delete(arr[i]);

	return (0);
}
