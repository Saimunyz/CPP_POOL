/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:36:03 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 20:06:17 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(void) : _name("Unknown"), _signed(false), _grade_to_sign(150), _grade_to_exec(150) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, unsigned int sign, unsigned int exec) : _name(name), _signed(false),
	_grade_to_sign(sign), _grade_to_exec(exec) {
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	else if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form " << name << " with grade_to_sign ";
	std::cout << sign << " and grade_to_exec "<< exec << " constructor called" << std::endl;
}

Form::Form(Form const & rhs) : _name(rhs._name), _grade_to_sign(rhs._grade_to_sign),
	_grade_to_exec(rhs._grade_to_exec)
{
	*this = rhs;
	std::cout << "Form copy  constructor called" << std::endl;
}

Form::~Form(void) {
	std::cout << "Form destructor called" << std::endl;
}

Form &	Form::operator=(Form const & rhs) {
	if (this == &rhs)
		return *this;
	this->_signed = rhs._signed;
	return *this;
}

unsigned int	Form::getGradeToSign(void) const {
	return this->_grade_to_sign;
}

unsigned int	Form::getGradeToExec(void) const {
	return this->_grade_to_exec;
}

std::string const	Form::getName(void) const {
	return this->_name;
}

bool	Form::isSigned(void) const {
	return this->_signed;
}

void	Form::beSigned(Bureaucrat const & b) {
	if (b.getGrade() <= this->_grade_to_sign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs) {
	o << "Form " << rhs.getName() << std::endl;
	o << "signed: " << rhs.isSigned() << std::endl;
	o << "signing grade: " << rhs.getGradeToSign() << std::endl;
	o << "executing grade: " << rhs.getGradeToExec();
	return o;
}
