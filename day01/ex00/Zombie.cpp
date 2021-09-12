/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:38:15 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 22:14:23 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << this->name << " has been created" << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "The destructor has cleaned up your zombie named:";
	std::cout << this->name << std::endl;
	return ;
}

void	Zombie::announce(void) {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

