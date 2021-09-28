/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:22:59 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 22:52:32 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unknown"), _grade(150) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150) {
	std::cout << "Bureaucrat " << name << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat " << name << " with grade " << grade << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) : _name(rhs._name) {
	*this = rhs;
	std::cout << "Bureaucrat copy  constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat  destructor called" << std::endl;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs) {
	if (this == &rhs)
		return *this;
	this->_grade = rhs._grade;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

void	Bureaucrat::setGrade(unsigned int grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

unsigned int	Bureaucrat::getGrade(void) const {
	return this->_grade;
}

std::string const	Bureaucrat::getName(void) const {
	return this->_name;
}

void	Bureaucrat::incrGrade(void) {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrGrade(void) {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form & f) const {
	if (f.isSigned())
	{
		std::cout << f.getName() << " form is already signed" << std::endl;
		return ;
	}
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signs " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " can't sign '" << f.getName() << "' because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form) {
	try
	{
		form.execute(*this);
		std::cout << this->_name << " has executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: cannot execute, because " << e.what() << std::endl;
	}

}


