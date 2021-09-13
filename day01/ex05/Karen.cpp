/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:31:10 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/14 00:14:04 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {

	this->level_list[0] = "DEBUG";
	this->level_list[1] = "INFO";
	this->level_list[2] = "WARNING";
	this->level_list[3] = "ERROR";
	this->func_list[0] = &Karen::debug;
	this->func_list[1] = &Karen::info;
	this->func_list[2] = &Karen::warning;
	this->func_list[3] = &Karen::error;
	return ;
}

Karen::~Karen(void) {
	return ;
}

void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-special";
	std::cout << "-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost ";
	std::cout << "more money. You don’t put enough! If you did ";
	std::cout << "I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << ". I’ve been coming here for years and you ";
	std::cout << "just started working here last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak ";
	std::cout << "to the manager now." << std::endl;
}

void	Karen::complain(std::string level) {

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(this->level_list[i]) == 0)
			(this->*func_list[i])();
	}
}
