/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:40:40 by jose-gon          #+#    #+#             */
/*   Updated: 2025/07/24 10:06:31 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &other)
{
	if (this != &other)
	{
		;
	}
	return *this;
}

ScalarConverter::~ScalarConverter()
{}

void printValue(double value)
{
	 // CHAR
    std::cout << "char: ";
    if (std::isnan(value) || value < 0 || value > 127)
        std::cout << "impossible\n";
    else if (!std::isprint(static_cast<char>(value)))
        std::cout << "Non displayable\n";
    else
        std::cout << '\'' << static_cast<char>(value) << "'\n";

    // INT
    std::cout << "int: ";
    if (std::isnan(value) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        std::cout << "impossible\n";
    else
        std::cout << static_cast<int>(value) << "\n";

    // FLOAT
    std::cout << "float: ";
    std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f\n";

    // DOUBLE
    std::cout << "double: ";
    std::cout << static_cast<double>(value) << "\n";
}

void ScalarConverter::convert(const std::string literal)
{
	double value;

	if (literal.length() == 1 && std::isprint(literal[0]))
		value = static_cast<double>(literal[0]);
	else if (literal == "nanf")
		value = std::numeric_limits<float>::quiet_NaN();
	else if (literal == "+inff")
		value = std::numeric_limits<float>::infinity();
	else if (literal == "-inff")
		value = std::numeric_limits<float>::infinity();	
	else if (literal == "nan")
		value = std::numeric_limits<double>::quiet_NaN();
	else if (literal == "+inf")
		value = std::numeric_limits<double>::infinity();
	else if (literal == "-inf")
		value = std::numeric_limits<double>::infinity();
	else
	{
		char *end;
		errno = 0;
		value = std::strtod(literal.c_str(), &end);
				
		if (errno || (end[0] != '\0' && !(end[0] == 'f' && end[1] == '\0')))
		{
			return ;
		}
	}
	printValue(value);
}
