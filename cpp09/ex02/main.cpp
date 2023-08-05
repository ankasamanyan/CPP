#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector<int>			intVector;
	std::deque<int>				intDeque;
	PmergeMe<std::vector<int> >	theVectorMerger;
	PmergeMe<std::deque<int> >	theDequeMerger;
	unsigned long timeVector;
	unsigned long timeDeque;
	
	if(incorrectInput(argc, argv)) return 0;
	timeVector = getTime();
	intVector = fillContainer<std::vector<int> >(argc, argv);
	timeDeque = getTime();
	intDeque = fillContainer<std::deque<int> >(argc, argv);
	printcContainer("Before:", intVector);
	theVectorMerger.mergeInsertSort(intVector, 2);
	timeVector = getTime() - timeVector;
	theDequeMerger.mergeInsertSort(intDeque, 2);
	timeDeque = getTime() - timeDeque;
	printcContainer("After: ", intVector);
	printTime("vector<int>", argc, timeVector);
	printTime("deque<int> ", argc, timeDeque);
	return (0);
}
