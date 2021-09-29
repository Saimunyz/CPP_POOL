/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:05:11 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 23:25:10 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy_Form", 72, 45), _target("Unknown") {
		std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :  Form("Robotomy_Form", 72, 45), _target(target) {
		std::cout << "RobotomyRequestForm " << target << " constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs) : Form( rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExec()){
	*this = rhs;
	std::cout << "RobotomyRequestForm copy  constructor called" << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	if (this == &rhs)
		return *this;
	Form::operator=(rhs);
	this->_target = rhs._target;
	return *this;
}

std::string const &	RobotomyRequestForm::getTarget(void) const {
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executer) const {
	this->checkForException(executer);
	std::cout << "Brrrrrrrrr" << std::endl;
	std::cout << "Brrrrrrrrr" << std::endl;
	std::cout << "Brrrrrrrrr" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomizing has failed" << std::endl;
}
