/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:26:59 by jose-gon          #+#    #+#             */
/*   Updated: 2025/08/06 17:14:37 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
		virtual ~Base();
};
	
Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
	
// Base * generate(void);
// It randomly instantiates A, B, or C and returns the instance as a Base pointer. Feel free
// to use anything you like for the random choice implementation.
// void identify(Base* p);
// It prints the actual type of the object pointed to by p: "A", "B", or "C".
// void identify(Base& p);
// It prints the actual type of the object referenced by p: "A", "B", or "C". Using a pointer
// inside this function is forbidden.