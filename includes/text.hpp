#ifndef TEXT_HPP
# define TEXT_HPP

#include <iostream>
#include <iosfwd>
#include <sstream>
#include "rectangle.hpp"
#include "font.hpp"
#include "point.hpp"

class Text : public Rectangle
{
public:
	Text();
	void setPoint();
	std::string ToString();
	void input() override;
private:
	Point angle;
	Font  font;
	std::string text;
};

#endif 