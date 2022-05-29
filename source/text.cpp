#include "../includes/text.hpp"

Text::Text()
{
	angle = Point();
	font = Font{};
	text = "(null)";
}

void Text::setPoint()
{
	Point point;

	std::cin >> point;
	this->angle = point;
}

void Text::input()
{
	setPoint();
	font.customization();
}

std::string Text::ToString()
{
    std::ostringstream ostream;

	ostream << angle;
	ostream << font;

    return ostream.str();
}