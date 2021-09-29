/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:40:18 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/29 16:05:49 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {
	this->forms[0] = (func_l){"shrubbery creation", &Intern::makeShrubbery};
	this->forms[1] = (func_l){"robotomy request", &Intern::makeRobotomy};
	this->forms[2] = (func_l){"presidential pardon", &Intern::makePresidential};
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern(void) {
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(Intern const & rhs) {
	*this = rhs;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern &	Intern::operator=(Intern const & rhs) {
	if (this == &rhs)
		return *this;
	for (size_t i = 0; i < 3; i++)
		this->forms[i] = rhs.forms[i];
	return *this;
}

Form *	Intern::makeShrubbery(std::string const target) {
	return new ShrubberyCreationForm(target);
}

Form *	Intern::makeRobotomy(std::string const target) {
	return new RobotomyRequestForm(target);
}

Form *	Intern::makePresidential(std::string const target) {
	return new PresidentialPardonForm(target);
}

Form *	Intern::makeForm(std::string name, std::string target) {

	for (size_t i = 0; i < 3; i++)
	{
		if (forms[i].name == name)
			return (this->*forms[i].f)(target);
	}
	throw NotKnownForm();
	return NULL;
}
