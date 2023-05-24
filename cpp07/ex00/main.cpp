#include "whatever.hpp"

int main()
{
	int i = 42;
	int j = 23;
	char a = 'a';
	char b = 'b';
	std::string str1 = "halp";
	std::string str2 = "hilfe";

	printThings(i, j);
	printThings(a, b);
	printThings(str1, str2);

	return 0;
}
