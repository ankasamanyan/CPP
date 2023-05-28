
#ifndef ARRAY_HPP
	#define ARRAY_HPP
#include <iostream>
#include "Colours.h"

template <typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_content;
	public:
		Array();
		explicit Array(unsigned int size);
		Array(const Array &copy);
		Array	&operator=(const Array &copy);
		~Array();
};


template <typename T>
Array<T>::Array(): _size(0), _content(nullptr)
{
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
	_content = new T[_size];
}

template <typename T>
Array<T>::Array(const Array &copy) : _size(copy._size)
{
	*this = copy;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &copy)
{
	if(_content)
		delete[] _content;
	_size = copy._size;
	_content = new T[_size];
	if (_size > 0)
		for (unsigned int i = 0; i < _size; i++)
			_content[i] = copy._content[i];
	return (*this);	
}

template <typename T>
Array<T>::~Array()
{
	if(_content)
		delete[] _content;
}
#endif