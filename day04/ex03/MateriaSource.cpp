/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:26:46 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/27 15:47:34 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) : _amount(0) {
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & rhs) {
	*this = rhs;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
	std::cout << "MateriaSource default destructor called" << std::endl;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs) {
		if (this == &rhs)
		return *this;
	this->_amount = rhs._amount;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (rhs._materias[i])
			this->_materias[i] = rhs._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria * m) {
	if (!m || _amount >= 4)
	{
		std::cout << "Can't learn more" << std::endl;
		return ;
	}
	this->_materias[_amount] = m->clone();
	_amount++;
}

AMateria *	MateriaSource::createMateria(std::string const & type) {
	for (size_t i = 0; i < _amount; i++)
	{
		if (this->_materias[i]->getType().compare(type) == 0)
			return this->_materias[i]->clone();
	}
	std::cout << "Unknown type of materia" << std::endl;
	return NULL;
}



