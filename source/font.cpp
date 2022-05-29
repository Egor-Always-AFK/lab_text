# include "../includes/font.hpp"

void Font::customization()
{
	std::cout << "Chose font size:";
	int new_size;
	std::cin >> new_size;
	size_of_font = new_size;
	std::cout << "Chose font name:\n" << static_cast<int>(fonts::Calibri) << " - for Calibri\n"
	<< static_cast<int>(fonts::Arial) << " - for Arial\n" << static_cast<int>(fonts::Century) << " - for Century\n"
	<< static_cast<int>(fonts::Impact) << " - for Impact\n" << static_cast<int>(fonts::Tahoma) << " - for Tahoma\nYour choise: ";
	int choise;
	std::cin >> choise;
	switch (choise)
	{
	case fonts::Calibri:
	{
		font_name = "Calibri";
		break;
	}
	case fonts::Arial:
	{
		font_name = "Arial";
		break;
	}
	case fonts::Century:
	{	
		font_name = "Century";
		break;
	}
	case fonts::Impact:
	{
		font_name = "Impact";
		break;
	}
	case fonts::Tahoma:
	{
		font_name = "Tahoma";
		break;
	}
	default:
	{
		std::cout << "Bad arg! Repeat please!";
		break;
	}
	}
	std::cin >> color;
}

std::ostream& operator << (std::ostream& out, const Font& font)
{
	std::cout << "\n\nFont name: " << font.font_name;
	std::cout << "\nFont size: " << font.size_of_font;
	std::cout << font.color;

	return out;
}