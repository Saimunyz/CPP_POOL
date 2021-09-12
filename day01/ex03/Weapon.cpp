/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 23:23:15 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 23:45:20 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	return ;
}

Weapon::Weapon(void) {
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

std::string const	&Weapon::getType(void) const {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
