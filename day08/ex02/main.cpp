/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/07 17:51:12 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>


int	main(void)
{
	try
	{
		Span sp1 = Span(5);
		sp1.addNumber(5);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
		std::cout <<std::endl;
		sp1.display();
		std::cout <<std::endl;
		sp1.addNumber(100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(10000);
		std::vector<int> vect;
		for (int i =0; i < 10000; i += 5)
			vect.push_back(i);

		sp.addNumber(vect.begin(), vect.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return 0;
}
