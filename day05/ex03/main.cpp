/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/29 16:02:51 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{

	Bureaucrat jim("Jim", 1);
	Intern in;
	Form * form;


	std::cout << std::endl;

	try
	{
		form = in.makeForm("hello", "lalal");
		form = in.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		form = in.makeForm("robotomy request", "Bender");

		std::cout << *form << std::endl;

		jim.signForm(*form);
		jim.executeForm(*form);

		delete form;

		std::cout << std::endl;

		form = in.makeForm("presidential pardon", "???");

		std::cout << *form << std::endl;

		jim.signForm(*form);
		jim.executeForm(*form);

		delete form;

		std::cout << std::endl;

		form = in.makeForm("shrubbery creation", "home");

		std::cout << *form << std::endl;

		jim.signForm(*form);
		jim.executeForm(*form);

		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	return 0;
}
