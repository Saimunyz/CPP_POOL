/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 23:18:01 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat jim("Jim", 150);
	Bureaucrat bob("Bob", 50);
	Bureaucrat klark("Klark", 1);

	std::cout << std::endl;

	ShrubberyCreationForm	sh("Sh_Form");
	RobotomyRequestForm		rr("Rr_Form");
	PresidentialPardonForm	pp("Pp_Form");

	std::cout << std::endl;

	std::cout << sh << std::endl;
	std::cout << rr << std::endl;
	std::cout << pp << std::endl;

	std::cout << std::endl;

	jim.signForm(sh);
	bob.signForm(sh);
	jim.executeForm(sh);
	bob.executeForm(sh);

	std::cout << std::endl;

	klark.executeForm(rr);
	klark.signForm(rr);
	bob.signForm(rr);
	klark.executeForm(rr);

	std::cout << std::endl;

	klark.signForm(pp);
	bob.executeForm(pp);
	klark.executeForm(pp);

	std::cout << std::endl;

	std::cout << sh << std::endl;
	std::cout << rr << std::endl;
	std::cout << pp << std::endl;

	std::cout << std::endl;

	return 0;
}
