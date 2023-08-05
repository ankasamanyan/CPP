bool	incorrectInput(int argc, char **argv)
{
	if (argc < 3)
	{
		Utils::printMsg("Not enough arguments provided!", YELLOW);
		return true;
	}
	for (int i = 1; i < argc; i++)
	{	
		if (!Utils::strCheck(argv[i], isnumber) || strlen(argv[i]) < 1
			|| atol(argv[i]) > std::numeric_limits<int>::max())
		{
			Utils::printMsg("Incorrect Input!", ORANGE);
			return true;
		}
	}
	return false;
}

void	printTime(std::string container, int argc , unsigned long time)
{
	PRINT << GREEN "Time to process a range of " PURPLE << argc - 1;
	PRINT << GREEN " elements with" PURPLE " std::"  << container;
	PRINT << GREEN " : " YELLOW << time << " µs" << RESET_LINE;
}

template <typename T>
T	randomFill(void)
{
	srand(time(NULL));
	T	container;
	for (size_t i = 0; i < 20; i++)
		container.push_back(rand() % 100);
	return (container);
}

template <typename T>
T	fillContainer(int argc, char **argv)
{
	T	container;
	for (int i = 1; i < argc ; i++)
		container.push_back(atoi(argv[i]));
	return (container);
}

template <typename T>
void	printcContainer(std::string msg, T &container)
{
	PRINT << RESET_LINE<< PURPLE << msg << "    "; 
	for (typename T::iterator i = container.begin(); i != container.end(); i++)
		PRINT << GREEN << *i << " ";
	PRINT << RESET_LINE << RESET_LINE;
}

unsigned long getTime() 
{
	struct timeval tv;

	gettimeofday(&tv,NULL);	
	return static_cast<unsigned long>(tv.tv_sec) * 1000000 + tv.tv_usec;
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
	Utils::printMsg("ALL GOOD", GREEN);
}

template <typename T>
void	PmergeMe<T>::mergeInsertSort(T &input, unsigned long k)
{
	if (input.size() <= k)
	{
		insert(input);
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

	for (int curr = 1; curr < (int)input.size(); curr++)
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
			if (input.at(curr) < input.at(prev))
				continue ;
			iter = input.begin() + (prev + 1);
			input.insert(iter, input.at(curr));
			iter = input.begin() + (curr + 1);
			input.erase(iter);
			break ;
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
