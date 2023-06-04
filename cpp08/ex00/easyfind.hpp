#ifndef EASYFIND_HPP
	#define EASYFIND_HPP
#include "Colours.h"
#include <algorithm>

template	<typename T>
typename T::iterator	easyfind(T &container, int element)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), element);
	if(it != container.end())
		return it;
	else
		throw std::invalid_argument("\033[0;36mEasyfind:\033[0;33m No such element!\033[0m");
}

#endif