/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 23:33:13 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/13 00:07:51 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack(void) {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
