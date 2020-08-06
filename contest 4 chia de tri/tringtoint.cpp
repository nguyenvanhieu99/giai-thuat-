#include <iostream>
#include <string>

int main() {

	std::string s = "10";

	try
	{
		int i = std::stoi(s);
		std::cout << i << '\n';
	}
	catch (std::invalid_argument const &e)
	{
		std::cout << "Bad input: std::invalid_argument thrown" << '\n';
	}
	catch (std::out_of_range const &e)
	{
		std::cout << "Integer overflow: std::out_of_range thrown" << '\n';
	}

	return 0;
}
