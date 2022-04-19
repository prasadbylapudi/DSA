#include <iostream>
#include <vector>
#include <sstream>

int main()
{
	std::vector<char> input({ 'a', 'b', 'c' });

	std::ostringstream out;
	for (char c: input) {
		out << c;
	}

	std::string s(out.str());
	std::cout << s;

	return 0;
}