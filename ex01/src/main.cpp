/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 22:03:28 by jose-gon          #+#    #+#             */
/*   Updated: 2025/07/30 12:35:06 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>
#include <Data.hpp>

int main()
{
	Data data;
	data.name = "Paiaso";;
	data.value = 42;

	//Original pointer info
	std::cout << "Original Data pointer: " << &data << std::endl;
	std::cout << "Original Data content:" << std::endl;
	std::cout << "-Name: " << data.name << std::endl;
	std::cout << "-value: " << data.value << std::endl;

	//Serialización
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialized (uintptr_t): " << raw << std::endl;

	//Deserialize
	Data* recovered = Serializer::deserialize(raw);
	std::cout << "Deserialized Data pointer: " << recovered << std::endl;

	//Check all gone ok
	if (recovered == &data)
		std::cout << "Success: deserialized pointer matches original." << std::endl;
	else
		std::cout << "Error: pointers do not match!" << std::endl;
	
	//Recovered pointer info
	std::cout << "Recovered Data pointer: " << &data << std::endl;
	std::cout << "Recovered Data content:" << std::endl;
	std::cout << "-Name: " << data.name << std::endl;
	std::cout << "-value: " << data.value << std::endl;

	return 0;
}
