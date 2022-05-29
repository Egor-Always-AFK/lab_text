#include "includes/text.hpp"

int main()
{
	Text text;

	text.input();
	std::cout << "\n\n\n\nYour text:\n" << text.ToString();

	return 0;
}