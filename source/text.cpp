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

void Text::output()
{
    std::cout << "\n\n\n\nYour text:\n";
    std::cout << angle;
    std::cout << "\n-----\n";
    std::cout << font;
}

void Text::input()
{
    setPoint();
    font.customization();
}