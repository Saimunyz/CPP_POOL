/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 23:33:13 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 23:50:13 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA(void) {
	return ;
}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
