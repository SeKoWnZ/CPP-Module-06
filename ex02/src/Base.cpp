/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:10:15 by jose-gon          #+#    #+#             */
/*   Updated: 2025/08/06 15:29:41 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>

Base::~Base(){};

Base *generate()
{
	std::srand(std::time(0));

	int r = rand() % 3;
	switch (r)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		default:
			return new C;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "object pointed to by p: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "object pointed to by p: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "object pointed to by p: C" << std::endl;
	else
		std::cout << "object pointed to by p: Unknown type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "object referred to by p: A" << std::endl;
		return;
	}
	catch(...){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "object referred to by p: B" << std::endl;
		return;
	}
	catch(...){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "object referred to by p: C" << std::endl;
		return;
	}
	catch(...){}
	std::cout << "object referred to by p: Unknown type" << std::endl;
}
