#ifndef COLOR_HPP
# define COLOR_HPP

#include <stdint.h>
#include <iostream>

class Color
{
private:
	uint8_t red;
	uint8_t green;
	uint8_t blue;
public:
	Color();
	Color(uint8_t red, uint8_t green, uint8_t blue);
	uint8_t getRed();
	uint8_t getGreen();
	uint8_t getBlue();
	void setRed(uint8_t red);
	void setGreen(uint8_t green);
	void setBlue(uint8_t blue);
	friend std::ostream& operator << (std::ostream& out, const Color& color);
    friend std::istream& operator >> (std::istream& in, Color& color);
};

#endif