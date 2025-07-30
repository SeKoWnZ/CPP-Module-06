/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:04:16 by jose-gon          #+#    #+#             */
/*   Updated: 2025/07/29 22:02:08 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>
#include <Data.hpp>

Serializer::Serializer(){}

Serializer::Serializer(const Serializer &other)
{
	*this = other;
}

Serializer & Serializer::operator=(const Serializer &other)
{
	if (this != &other)
		return *this;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
