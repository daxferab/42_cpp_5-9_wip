#include "include/iter.hpp"
#include <iostream>

int main ()
{
	int				arrayInts[] = {1, 2, 3, 4};
	char			arrayChar[] = {'a', 'b', 'c', 'd'};
	double			arrayDouble[] = {1.5, 0.6, 3.5, 7.4};
	size_t const	length = 4;

	std::cout << "Original Ints Array: {";
	for (size_t i = 0; i < length; i++)
		std::cout << arrayInts[i] << (i < (length - 1) ? ", " : "");
	std::cout << "}" << std::endl;

	iter(arrayInts, length, increment<int>);

	std::cout << "Incremented Ints Array: {";
	for (size_t i = 0; i < length; i++)
		std::cout << arrayInts[i] << (i < (length - 1) ? ", " : "");
	std::cout << "}" << std::endl;

	std::cout << "---------------------------------------" << std::endl;

	std::cout << "Original Char Array: {";
	for (size_t i = 0; i < length; i++)
		std::cout << arrayChar[i] << (i < (length - 1) ? ", " : "");
	std::cout << "}" << std::endl;

	iter(arrayChar, length, increment<char>);

	std::cout << "Incremented Char Array: {";
	for (size_t i = 0; i < length; i++)
		std::cout << arrayChar[i] << (i < (length - 1) ? ", " : "");
	std::cout << "}" << std::endl;

	std::cout << "---------------------------------------" << std::endl;

	std::cout << "Original Double Array: {";
	for (size_t i = 0; i < length; i++)
		std::cout << arrayDouble[i] << (i < (length - 1) ? ", " : "");
	std::cout << "}" << std::endl;

	iter(arrayDouble, length, increment<double>);

	std::cout << "Incremented Double Array: {";
	for (size_t i = 0; i < length; i++)
		std::cout << arrayDouble[i] << (i < (length - 1) ? ", " : "");
	std::cout << "}" << std::endl;

	return 0;
}
