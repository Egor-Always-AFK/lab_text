# include "../includes/color.hpp"

Color::Color()
{
	setRed(0);
	setGreen(0);
	setBlue(0);
}

Color::Color(uint8_t red, uint8_t green, uint8_t blue)
{
	setRed(red);
	setGreen(green);
	setBlue(blue);
}

uint8_t Color::getGreen()
{
	return (green);
}

uint8_t Color::getBlue()
{
	return (blue);
}

void Color::setRed(uint8_t red)
{
	this->red = red;
}

void Color::setGreen(uint8_t green)
{
	this->green = green;
}

void Color::setBlue(uint8_t blue)
{
	this->blue = blue;
}

uint8_t Color::getRed()
{
	return(red);
}

std::ostream& operator << (std::ostream& out, const Color& color)
{
    std::cout << "\n\nColor:\nred = " << (int)color.red << "\ngreen = " << (int)color.green << "\nblue = " << (int)color.blue << "\n";
    return out;
}

std::istream& operator >> (std::istream& in, Color& color)
{
	std::cout << "Enter a color (0 <= color <= 256)\nred = ";
	int red = 0;
	std::cin >> red;
	try
	{
		if (red >= 256 || red < 0)
			throw -1;
	}
	catch(int)
	{
		std::cout << "\ntry again!\n";
		exit (0);
	}
	std::cout << "green = ";
	int green = 0;
	std::cin >> green;
	try
	{
		if (green >= 256 || green < 0)
			throw -1;
	}
	catch(int)
	{
		std::cout << "\ntry again!\n";
		exit (0);
	}
	std::cout << "blue = ";
	int blue = 0;
	std::cin >> blue;
	try
	{
		if (blue >= 256 || blue < 0)
			throw -1;
	}
	catch(int)
	{
		std::cout << "\ntry again!\n";
		exit (0);
	}
	color.setRed(red);
	color.setBlue(blue);
	color.setGreen(green);
    return in;
}
