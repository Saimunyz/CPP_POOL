/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 20:06:25 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat a("Swagstaf", 100);
	Form	f("Can be signed", 120, 120);
	Form	f1("Can't be signed", 99, 99);

	std::cout << a << std::endl;
	std::cout << f << std::endl;
	std::cout << f1 << std::endl;

	try {
		Form	f2("Bad", 0, 120);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form	f3("Bad", 120, 151);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	a.signForm(f);
	a.signForm(f);
	a.signForm(f1);

	std::cout << std::endl;

	Form f4(f);
	Form f5(f1);

	std::cout << std::endl;

	std::cout << f4 << std::endl;
	std::cout << f5 << std::endl;

	std::cout << std::endl;

	return 0;
}
