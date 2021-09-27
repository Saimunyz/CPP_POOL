/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:54:48 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/27 14:50:47 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void) : _name("Unknown"), _amount(0) {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(std::string name) : _name(name), _amount(0) {
	std::cout << "Character " << this->_name << " constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(Character const & rhs) {
	*this = rhs;
	std::cout << "Character copy constructor called" << std::endl;

}

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	std::cout << "Character default destructor called" << std::endl;
}

Character &	Character::operator=(Character const & rhs) {
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
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

std::string const &	Character::getName(void) const {
	return this->_name;
}

void	Character::equip(AMateria *m) {
	if (this->_amount < 4 && m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_materias[i])
			{
				this->_materias[i] = m;
				_amount++;
				break;
			}
		}
	}
	else if (!m)
		std::cout << "Error: material doesn't exist" << std::endl;
	else
		std::cout << "Inventory is full" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx > 4 || idx < 0)
		std::cout << "Error: there is no such id " << idx << std::endl;
	else
	{
		if (this->_materias[idx])
		{
			std::cout << this->getName() << " dropped " << this->_materias[idx]->getType() << std::endl;
			this->_materias[idx] = NULL;
			_amount--;
		}
		else
		std::cout << "This slot is already empty" << std::endl;

	}
}

void	Character::use(int idx, ICharacter & target) {
	if (idx < 0 || idx > 4)
		std::cout << "Error: material doesn't exist" << std::endl;
	else
	{
		if (this->_materias[idx])
			this->_materias[idx]->use(target);
		else
			std::cout << "Error: there is no such id " << idx << std::endl;
	}
}
