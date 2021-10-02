/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/02 18:26:27 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base * generate(void) {
	switch (std::rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	}
	return NULL;
}

void	identify(Base *p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "Ptr is A" << std::endl;
	else if (b)
		std::cout << "Ptr is B" << std::endl;
	else if (c)
		std::cout << "Ptr is C" << std::endl;
	else
		std::cout << "Ptr is unknown" << std::endl;
}

void	identify(Base & p)
{
	try
	{
		A & a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Ref is A" <<std::endl;
	}
	catch(...) {}
	try
	{
		B & b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Ref is B" <<std::endl;
	}
	catch(...) {}
	try
	{
		C & c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Ref is C" <<std::endl;
	}
	catch(...) {}

}

int	main()
{
	std::srand(std::time(NULL));

	Base *b1 = generate();
	identify(b1);
	identify(*b1);

	delete b1;

	std::cout << std::endl;

	Base *b2 = generate();
	identify(b2);
	identify(*b2);

	delete b2;

	return 0;
}
