#include "include/ScalarConverter.hpp"

static void	display(std::string type, std::string literal);
static void	handle_special(std::string literal);

void	ScalarConverter::convert(std::string literal)
{
	display(strType(literal), literal);
}

static void	display(std::string type, std::string literal)
{
	if (type == CHAR)
	{
		char	p = literal[1];
		std::cout << "char: '" << p << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(p) << std::endl;
		std::cout << "float: " << static_cast<float>(p) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(p) << std::endl;
	}
	if (type == INT)
	{
		char	*end;
		int		p = static_cast<int>(strtol(literal.c_str(), &end, 10));

		if (p < CHAR_MIN || p > CHAR_MAX)
			std::cout << "char: impossible" << std::endl;
		else if (p >= 32 && p <= 126)
			std::cout << "char: '" << static_cast<char>(p) << "'" << std::endl;
		else 
			std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << p << std::endl;
		std::cout << "float: " << static_cast<float>(p) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(p) << std::endl;
	}
	if (type == FLOAT)
	{
		char	*end;
		float	p = static_cast<float>(strtof(literal.c_str(), &end));
		int		c = static_cast<int>(p);

		if (p < CHAR_MIN || p > CHAR_MAX)
			std::cout << "char: impossible" << std::endl;
		else if (c >= 32 && c <= 126)
			std::cout << "char: '" << static_cast<char>(p) << "'" << std::endl;
		else 
			std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(p) << std::endl;
		std::cout << "float: " << p << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(p) << std::endl;
	}
	if (type == DOUBLE)
	{
		char	*end;
		double	p = static_cast<double>(strtof(literal.c_str(), &end));
		int		c = static_cast<int>(p);

		if (p < CHAR_MIN || p > CHAR_MAX)
			std::cout << "char: impossible" << std::endl;
		else if (c >= 32 && c <= 126)
			std::cout << "char: '" << static_cast<char>(p) << "'" << std::endl;
		else 
			std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(p) << std::endl;
		std::cout << "float: " << static_cast<float>(p) << "f" << std::endl;
		std::cout << "double: " << p << std::endl;
	}
	if (type == NONE)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	if (type == SPECIAL)
		handle_special(literal);
}

static void	handle_special(std::string literal)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (literal == "+inf" || literal == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	if (literal == "-inf" || literal == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}