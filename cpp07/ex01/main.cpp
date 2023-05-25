#include "iter.hpp"

int main()
{
	int	intArray[] = { 1, 42, 3, 4, 5, 6, 7, 89, 4215, 3456};
	std::string strArray[] = {"Do not go gentle into that good night,", 
							"Old age should burn and rave at close of day;",
							"Rage, rage against the dying of the light.",
							"Though wise men at their end know dark is right,",
							"Because their words had forked no lightning they",
							"Do not go gentle into that good night."};
	iter(strArray, 6, printStringy);
	std::cout << RESET_LINE << std::string (50, '-') << "\n"<< RESET_LINE;
	iter(intArray, 10, printInt);
	std::cout << RESET_LINE << std::string (50, '-') << "\n"<< RESET_LINE;
	iter(intArray, 10, increasetInt);
	return 0;
}
