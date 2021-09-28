/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 21:11:47 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 23:20:41 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery_Form", 145, 137), _target("Unknown") {
		std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :  Form("Shrubbery_Form", 145, 137), _target(target) {
		std::cout << "ShrubberyCreationForm " << target << " constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs) : Form( rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExec()){
	*this = rhs;
	std::cout << "ShrubberyCreationForm copy  constructor called" << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	if (this == &rhs)
		return *this;
	Form::operator=(rhs);
	this->_target = rhs._target;
	return *this;
}

std::string const &	ShrubberyCreationForm::getTarget(void) const {
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executer) const {
	std::ofstream	o_file;
	std::string		filename;

	this->checkForException(executer);
	filename = this->_target + "_shrubbery";
	o_file.open(filename.c_str(), std::ios::out | std::ios::trunc);
	if (!o_file.is_open())
		throw FileOpenError();
	o_file << "               ,@@@@@@@,\n"
			  "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
			  "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
			  "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
			  "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
			  "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
			  "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
			  "       |o|        | |         | |\n"
			  "       |.|        | |         | |\n"
			  "    \\_/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_";
	o_file.close();

}



