
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
		Array(unsigned int size);
		Array(const Array<T> &copy);
		Array	&operator=(const Array<T> &copy);
		T	&operator[](unsigned int 	index);
		~Array();
	/* Exception */
	class OutOfBoundsException: public std::exception
	{
		const char *what() const throw()
		{
			return ("\033[0;33m* Index is out of bounds! *\033[0m");
		}
	};
};


template <typename T>
Array<T>::Array(): _size(0), _content(NULL)
{
}

template <typename T>
Array<T>::Array(unsigned int size)
{
	_size = size;
	_content = new T[_size];
}

template <typename T>
Array<T>::Array(const Array<T> &copy) :  _size(0), _content(NULL)
{
	*this = copy;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &copy)
{
	if(_content)
	{
		delete[] _content;
		_content = NULL;
	}
	_size = copy._size;
	_content = new T[_size];
	if (_size > 0)
		for (unsigned int i = 0; i < _size; i++)
			_content[i] = copy._content[i];
	return (*this);	
}

template <typename T>
T	&Array<T>::operator[](unsigned int 	index)
{
	if (_size == 0 || _size - 1 < index)
		throw (OutOfBoundsException());
	return (_content[index]);
}

template <typename T>
Array<T>::~Array()
{
	if(_content)
		delete[] _content;
}
#endif