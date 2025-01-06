#ifndef SERIALIZER_CLASS_HPP
# define SERIALIZER_CLASS_HPP

#include <stdint.h>
#include <iostream>

typedef struct Data
{
	std::string str;
	int n;
	bool b;
	double d;
} Data;

class Serializer
{
	private:

		Serializer(void);
		Serializer(Serializer const &src);
		Serializer&	operator=(Serializer const &assign);
		~Serializer(void);

	public:

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
