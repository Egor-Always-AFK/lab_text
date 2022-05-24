#ifndef TEXT_HPP
# define TEXT_HPP

#include <iostream>
#include "rectangle.hpp"
#include "font.hpp"
#include "point.hpp"

class Text : public Rectangle
{
public:
	Text();
	void setPoint();
	void input() override;
	void output() override;
private:
	Point angle;
	Font  font;
	std::string text;
};

#endif 