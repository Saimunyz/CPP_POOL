/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:08:30 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/17 18:50:45 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap() {
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "Scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "Default constructor created " << "ScavTrap - " << name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & rhs) {
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = rhs;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "Scavtrap assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitpoints();
	this->_energy = rhs.getEnergy();
	this->_damage = rhs.getDamage();
	return *this;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode";
	std::cout << std::endl;
}
