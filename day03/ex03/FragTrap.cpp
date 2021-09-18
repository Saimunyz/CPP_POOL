/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:33:30 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/18 21:22:52 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap() {
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "Fragtrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "Default constructor created " << "FragTrap - " << name << std::endl;
}

FragTrap::FragTrap(FragTrap const & rhs) {
	std::cout << "Fragtrap copy constructor called" << std::endl;
	*this = rhs;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "Fragtrap assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitpoints();
	this->_energy = rhs.getEnergy();
	this->_damage = rhs.getDamage();
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->getName() << " wants to give you highfive!" << std::endl;
}

void	FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap " << this->getName() << " attack ";
	std::cout << target << ", causing " << this->getDamage() << " points of damage!";
	std::cout << std::endl;
}

