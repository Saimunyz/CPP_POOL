/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:08:05 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 23:16:19 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential_Form", 25, 5), _target("Unknown") {
		std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :  Form("Presidential_Form", 25, 5), _target(target) {
		std::cout << "PresidentialPardonForm " << target << " constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) : Form( rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExec()){
	*this = rhs;
	std::cout << "PresidentialPardonForm copy  constructor called" << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	if (this == &rhs)
		return *this;
	Form::operator=(rhs);
	this->_target = rhs._target;
	return *this;
}

std::string const &	PresidentialPardonForm::getTarget(void) const {
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executer) const {
	this->checkForException(executer);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
