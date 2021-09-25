/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:08:18 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 17:10:12 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & rhs) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = rhs;
}

Brain::~Brain(void) {
	std::cout << "Brain default destructor called" << std::endl;
	if (!_ideas[0].empty())
	{
		std::cout << "There are some ideas :" << std::endl;
		for (int i = 0; i < 100; i ++)
		{
			if (_ideas[i].empty())
				break;
			std::cout << i << ": ";
			std::cout << _ideas[i] << std::endl;
		}
	}
}

Brain & Brain::operator=(Brain const & rhs) {
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}

void	Brain::setIdea(std::string idea) {
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i].empty())
		{
			this->_ideas[i] = idea;
			break;
		}
	}
}

std::string	Brain::getIdea(unsigned int idea) const {
	if (idea < 100 && !this->_ideas[idea].empty())
		return this->_ideas[idea];
	std::cout << "There is no " << idea << "idea";
	return NULL;
}



