// template <typename T>
// void	printcContainer(std::string msg, T &listy)
// {
// 	PRINT << RESET_LINE<< PURPLE << msg << "    "; 
// 	for (typename T::iterator i = listy.begin(); i != listy.end(); i++)
// 		PRINT << GREEN << *i << " ";
// 	PRINT << RESET_LINE << RESET_LINE;
// }

// template <typename T>
// void	checker(T &container)
// {
// 	for (typename T::iterator it = container.begin(); it + 1 != container.end(); it++)
// 	{
// 		if (*it > *(it + 1))
// 		{
// 			PRINT << RED << "ERROR   " << *it << "  " << *(it + 1) << RESET_LINE;
// 			printcContainer("FAULTY", container);
// 			return ;
// 		}
// 	}
// 	PRINT << GREEN << "ALL GOOD" << RESET_LINE;
// }

template <typename T>
void	PmergeMe<T>::mergeInsertSort(T &input, unsigned long k)
{
	if (input.size() <= k)
	{
		insert(input);
		// checker(input);
		return ;
	}
	typename T::iterator begin = input.begin();
	typename T::iterator middle = begin + input.size()/2;
	typename T::iterator end = input.end();

	T left(begin, middle);
	T right(middle, end);
	input.clear();
	mergeInsertSort(left, k);
	mergeInsertSort(right, k);
	merge(input, left, right);
}

template <typename T>
void	PmergeMe<T>::insert(T &input)
{
	typename T::iterator iter;

	for (unsigned long curr = 1; curr < input.size(); curr++)
	{
		if (input.at(curr) <= input.at(0))
		{
			input.insert(input.begin(), input.at(curr));
			iter = input.begin() + (curr + 1);
			input.erase(iter);
			continue;
		}
		for (int prev = curr - 1; prev >= 0; prev--)
		{
			if (input.at(curr) > input.at(prev))
			{
				iter = input.begin() + (prev + 1);
				input.insert(iter, input.at(curr));
				iter = input.begin() + (curr + 1);
				input.erase(iter);
			}
		}
	}
}

template <typename T>
void	PmergeMe<T>::merge(T &input,T &left,T &right)
{
	typename T::iterator leftIter = left.begin();
	typename T::iterator rightIter = right.begin();

	while (leftIter != left.end() && rightIter != right.end())
	{
		input.push_back(*leftIter < *rightIter? *leftIter : *rightIter);
		*leftIter < *rightIter? leftIter++ : rightIter++;
	}
	if (leftIter != left.end())
		for (; leftIter != left.end(); leftIter++)
			input.push_back(*leftIter);
	else 
		for (; rightIter != right.end(); rightIter++)
			input.push_back(*rightIter);
}
