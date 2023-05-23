#include "Serializer.hpp"

int main()
{
	Data	data;
	Data	*onePtr;
	Data	*anotherPtr;
	uintptr_t serialized;

	data.valueOne = 123;
	data.valueTwo = 321;
	onePtr = &data;
	std::cout << std::string(50, '-') << RESET_LINE << GREEN << "\t\t  START VALUES" << RESET_LINE << std::string(50, '-') << RESET_LINE;
	std::cout << PURPLE << "\t" << onePtr->valueOne << "\t\t" << RESET << "|" << PURPLE << "\t" << onePtr->valueTwo << RESET_LINE;
	std::cout << std::string(50, '-') << RESET_LINE << RESET_LINE;
	serialized = Serializer::serialize(onePtr);
	std::cout << "\t\t "  << "<< "<< serialized  << " >>" << RESET_LINE << RESET_LINE;
	anotherPtr = Serializer::deserialize(serialized);
	std::cout << std::string(50, '-') << RESET_LINE << GREEN << "\t\t   END VALUES" << RESET_LINE << std::string(50, '-') << RESET_LINE;
	std::cout << PURPLE << "\t" << anotherPtr->valueOne << "\t\t" << RESET << "|" << PURPLE << "\t" << anotherPtr->valueTwo << RESET_LINE;
	std::cout << std::string(50, '-') << RESET_LINE << RESET_LINE;

	return 0;
}
