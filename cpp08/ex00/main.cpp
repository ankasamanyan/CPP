#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <stdlib.h>

#define SIZE	5
int main(){
	{
		try
		{
			std::vector<int> 				arr;
			std::vector<int>::iterator		iter;
			arr.reserve(SIZE);
    		srand(time(NULL));
			for (int i = 0; i < SIZE; i++)
				arr.push_back(rand() % 5);
			std::vector<int>::const_iterator it = arr.begin();
			for (int i = 0; i < SIZE; i++)
				std::cout << SKY << i << ": " << GREEN << *it++ << RESET_LINE;
			std::cout << RESET_LINE;
			iter = easyfind(arr, 4);
			std::cout << PURPLE << "Element "<< GREEN <<"'"<< *iter << "'";
			std::cout <<  PURPLE << " found on position " << SKY << "'" << iter - arr.begin() << "'"<< RESET_LINE << RESET_LINE;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::vector<int> 				arr;
			std::vector<int>::iterator		iter;
			arr.reserve(SIZE);
    		srand(time(NULL));
			for (int i = 0; i < SIZE; i++)
				arr.push_back(rand() % 5);
		
			iter = easyfind(arr, -1);
			std::cout << *iter << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::vector<int> 				arr;
			std::vector<int>::iterator		iter;
			arr.reserve(SIZE);
    		srand(time(NULL));
			for (int i = 0; i < SIZE; i++)
				arr.push_back(rand() % 5);
		
			iter = easyfind(arr, 19);
			std::cout << *iter << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}