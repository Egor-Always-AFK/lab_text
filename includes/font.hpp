#ifndef FONT_HPP
# define FONT_HPP

#include <iostream>
#include "color.hpp"

class Font
{
public:
	void customization();
	friend std::ostream& operator << (std::ostream& out, const Font& font);

private:
	enum fonts
	{
		Calibri,
		Arial,
		Century,
		Impact,
		Tahoma
	};

	fonts		font_names;
	std::string	font_name;
	int			size_of_font;
	Color		color;
};

#endif