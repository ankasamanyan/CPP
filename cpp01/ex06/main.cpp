#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		printMsg("WRONG ARGMENT COUNT", PURPLE);
		return (0);
	}
	harl.complain(argv[1]);
	// harl.complain("smth else");
	// harl.complain("DEBUG");
	// harl.complain("INFO");
	// harl.complain("WARNING");
	// harl.complain("ERROR");
	return (0);
}
