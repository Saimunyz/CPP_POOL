/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:08:55 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/07 17:44:19 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <stdexcept>
#include <algorithm>

MutantStack::MutantStack(void) {}

MutantStack::MutantStack(unsigned int len) : _len(len) { _arr.reserve(len); }

MutantStack::~MutantStack(void) {}

MutantStack::MutantStack(MutantStack const & rhs) {
	*this = rhs;
}

MutantStack &	MutantStack::operator=(MutantStack const & rhs) {
	if (this == &rhs)
		return *this;
	this->_len = rhs._len;
	this->_arr = rhs._arr;
	return *this;
}

void	MutantStack::addNumber(int num) {
	if (_arr.size() >= _len)
		throw std::out_of_range("Array is full");
	_arr.push_back(num);
}

void	MutantStack::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	for (; start != end; start++)
			addNumber(*start);
}


unsigned int	MutantStack::shortestMutantStack(void) const {
	if (_arr.empty() || _arr.size() < 2)
		throw std::out_of_range("Not enough elements in array");

	std::vector<int>::const_iterator start = _arr.begin();
	std::vector<int>::const_iterator next = start + 1;
	unsigned int shortest_MutantStack, tmp;

	shortest_MutantStack = *next - *start;
	start++;
	for (; start < _arr.end(); start++)
	{
		next = start + 1;
		tmp = *next - *start;
		if (tmp < shortest_MutantStack)
			shortest_MutantStack = tmp;
	}
	return shortest_MutantStack;
}

unsigned int	MutantStack::longestMutantStack(void) const {
	if (_arr.empty() || _arr.size() < 2)
		throw std::out_of_range("Not enough elements in array");
	unsigned int max = *std::max_element(_arr.begin(), _arr.end());
	unsigned int min = *std::min_element(_arr.begin(), _arr.end());
	unsigned int res = max - min;
	return (res);

}

void	MutantStack::display(void) {
	for (std::vector<int>::const_iterator i = _arr.begin(); i != _arr.end(); i++)
		std::cout << *i << std::endl;
}
