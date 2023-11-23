#include <iostream>
#include <format>

template<typename T>
void PrintStuffInALine(const T& stuff)
{
	std::cout << std::format("~~~ {0} ~~~", stuff) << std::endl;
}