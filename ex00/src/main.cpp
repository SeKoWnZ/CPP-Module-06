/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:50:33 by jose-gon          #+#    #+#             */
/*   Updated: 2025/07/22 09:58:55 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ScalarConverter.hpp>

int main(int argc, char **argv)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		std::cerr << "Incorrect number of arguments: ./convert \"a\"" << std::endl;
}