#include <string>

#include "Dummy.h"

int main()
{
	using namespace std::string_literals;

#ifdef DEBUG
	PrintStuffInALine("<<Running in Debug Mode>>");
#endif // DEBUG
#ifdef NDEBUG
	PrintStuffInALine("<<Running in Release Mode>>");
#endif // NDEBUG

	PrintStuffInALine(100);
	PrintStuffInALine(25.25f);
	PrintStuffInALine("Hello");
	PrintStuffInALine("World"s);

	return 0;
}