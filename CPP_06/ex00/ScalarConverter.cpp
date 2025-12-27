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
		std::cout << "float: " << static_cast<float>(p) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(p) << ".0" << std::endl;
	}
	else if (type == INT)
	{
		char	*end;
		long	lval = strtol(literal.c_str(), &end, 10);
		int		p = static_cast<int>(lval);

		printChar(static_cast<float>(p));
		std::cout << "int: " << p << std::endl;
		std::cout << "float: " << static_cast<float>(p) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(p) << ".0" << std::endl;
	}
	else if (type == FLOAT)
	{
		char	*end;
		float	p = strtof(literal.c_str(), &end);

		printChar(p);
		printInt(p);
		printFloat(p);
		printDouble(static_cast<double>(p));
	}
	else if (type == DOUBLE)
	{
		char	*end;
		double	p = strtod(literal.c_str(), &end);

		printChar(static_cast<float>(p));
		printInt(static_cast<float>(p));
		printFloat(static_cast<float>(p));
		printDouble(p);
	}
	else if (type == NONE)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else if (type == SPECIAL)
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
	else if (literal == "-inf" || literal == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (literal == "nan" || literal == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}