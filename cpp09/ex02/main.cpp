#include "PmergeMe.hpp"

template <typename T>
T	fillContainer(void)
{
	srand(time(NULL));
	T	listyyy;
	for (size_t i = 0; i < 20; i++)
		listyyy.push_back(rand() % 100);
	return (listyyy);
}

// template <typename T>
// T	&fillList(int argc, char **argv)
// {
// 	// srand(time(NULL));
// 	std::list<int>	listyyy;
// 	for (int i = 1; i < argc; i++)
// 		listyyy.push_back(std::strtod(argv[i],NULL));
// 	return (listyyy);
// }


template <typename T>
void	printcContainer(std::string msg, T &listy)
{
	PRINT << RESET_LINE<< PURPLE << msg << "    "; 
	for (typename T::iterator i = listy.begin(); i != listy.end(); i++)
		PRINT << GREEN << *i << " ";
	PRINT << RESET_LINE << RESET_LINE;
}

template <typename T>
void	checker(T &container)
{
	for (typename T::iterator it = container.begin(); it + 1 != container.end(); it++)
	{
		if (*it > *(it + 1))
		{
			PRINT << RED << "ERROR   " << *it << "  " << *(it + 1) << RESET_LINE;
			printcContainer("FAULTY", container);
			return ;

		}
	}
	PRINT << GREEN << "ALL GOOD" << RESET_LINE;
}

int main()
{
	std::vector<int>			container;
	PmergeMe<std::vector<int> >	theVectorMerger;
	// if (argc < 3)
	// 	Utils::printMsg("Not enough arguments!", YELLOW);
	container = fillContainer<std::vector<int> >();
	printcContainer("Before:", container);
	theVectorMerger.mergeInsertSort(container, 7);
	// printcContainer("After: ", container);

	checker(container);
	
	return (0);
}
