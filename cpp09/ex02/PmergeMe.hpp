#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
#include <vector>
#include "Utils.hpp"
#include <fstream>
#include <sys/time.h>
#include <climits>
#include <cstdlib>

template <typename T>
class PmergeMe
{
	private:
		void	split(T &input,T &left,T &right);
		void	merge(T &input,T &left,T &right);
	public:
		void	insert(T &input);
		void	mergeInsertSort(T &input, unsigned long k);
};


#include "PmergeMe.tpp"
