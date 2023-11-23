#include <string>

#include "Dummy.h"

int main()
{
	using namespace std::string_literals;

	PrintStuffInALine(100);
	PrintStuffInALine(25.25f);
	PrintStuffInALine("Hello");
	PrintStuffInALine("World"s);

	return 0;
}