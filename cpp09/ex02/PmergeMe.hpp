#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include "Utils.hpp"

template <typename T>
class PmergeMe
{
	private:
		void	split(T &input,T &left,T &right);
		void	insert(T &input);
		void	merge(T &input,T &left,T &right);
		// void	pushRest(T &input, T& side, int i);

	public:
		void	mergeInsertSort(T &input, unsigned long k);

};

#include "PmergeMe.tpp"
