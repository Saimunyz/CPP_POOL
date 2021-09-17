/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:37:16 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/17 18:49:18 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name("Unknown"), _hitpoints(10), _energy(10), _damage(0) {
	std::cout << "Claptrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy(10), _damage(0){
	std::cout << "Default constructor created " << "ClapTrap - " << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs) {
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Claptrap destructor called" << std::endl;
}

void ClapTrap::setName(std::string name) {this->_name = name;}

std::string ClapTrap::getName(void) const {return this->_name;}

void ClapTrap::setHitpoints(unsigned int hitpoint) {this->_hitpoints = hitpoint;}

unsigned int ClapTrap::getHitpoints(void) const {return this->_hitpoints;}

void ClapTrap::setEnergy(unsigned int energy) {this->_energy = energy;}

unsigned int ClapTrap::getEnergy(void) const {return this->_energy;}

void ClapTrap::setDamage(unsigned int damage) {this->_damage = damage;}

unsigned int ClapTrap::getDamage(void) const {return this->_damage;}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "Claptrap assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitpoints();
	this->_energy = rhs.getEnergy();
	this->_damage = rhs.getDamage();
	return *this;
}

void	ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->getName() << " attack ";
	std::cout << target << ", causing " << this->getDamage() << " points of damage!";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount > this->_hitpoints)
		this->_hitpoints = 0;
	else
		this->_hitpoints -= amount;
	std::cout << "ClapTrap " << this->getName() << " got attacked";
	std::cout << ", receiving " << amount << " damage! ";
	std::cout << "Now he has " << this->getHitpoints() << " hitpoints";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (amount > 100 || amount +  this->_hitpoints > 100)
		this->_hitpoints = 100;
	else
		this->_hitpoints += amount;
	std::cout << "ClapTrap " << this->getName() << " got repaired";
	std::cout << ", of " << amount << " damage! ";
	std::cout << "Now he has " << this->getHitpoints() << " hitpoints";
	std::cout << std::endl;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs) {
	o << rhs.getName();
	return o;
}


