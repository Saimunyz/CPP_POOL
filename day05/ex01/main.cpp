/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 15:23:14 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat a("Swagstaf");

	std::cout << a << std::endl;

	try {
		a.incrGrade();
		a.incrGrade();
		a.incrGrade();
		std::cout << a << std::endl;
		a.decrGrade();
		std::cout << a << std::endl;
		a.setGrade(151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "Bob with 0 grade" << std::endl;
		Bureaucrat b("Bob", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Bob with 1000 grade" << std::endl;
		Bureaucrat b("Bob", 1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat c("Staf", 1);
	try {
		c.incrGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
