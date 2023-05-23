#ifndef SERIALIZER_HPP
	#define SERIALIZER_HPP
#include <iostream>
#include <stdint.h>
#include "Colours.h"

typedef struct s_data
{
	int	valueOne;
	int	valueTwo;
}	Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
		~Serializer();

	public:
		static uintptr_t	serialize(Data *ptr);
		static Data		*deserialize(uintptr_t raw);
};

#endif