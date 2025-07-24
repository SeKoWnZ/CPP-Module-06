/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:54:51 by jose-gon          #+#    #+#             */
/*   Updated: 2025/07/22 10:08:23 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cerrno>
# include <limits>
# include <cmath>
# include <iomanip>
# include <cstdlib>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter & operator=(const ScalarConverter & other);
		~ScalarConverter();
			
	public:
		static void convert(const std::string literal);
};

#endif