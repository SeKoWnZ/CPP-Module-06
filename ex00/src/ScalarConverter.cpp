/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:40:40 by jose-gon          #+#    #+#             */
/*   Updated: 2025/07/17 19:55:10 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &other)
{
	return *this;
}

ScalarConverter::~ScalarConverter()
{}

void ScalarConverter::convert(const std::string literal)
{
	double value;

	if (isCharLiteral(const std::string literal))
}
