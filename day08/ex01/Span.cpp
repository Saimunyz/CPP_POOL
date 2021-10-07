/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:08:55 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/07 17:44:19 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdexcept>
#include <algorithm>

Span::Span(void) {}

Span::Span(unsigned int len) : _len(len) { _arr.reserve(len); }

Span::~Span(void) {}

Span::Span(Span const & rhs) {
	*this = rhs;
}

Span &	Span::operator=(Span const & rhs) {
	if (this == &rhs)
		return *this;
	this->_len = rhs._len;
	this->_arr = rhs._arr;
	return *this;
}

void	Span::addNumber(int num) {
	if (_arr.size() >= _len)
		throw std::out_of_range("Array is full");
	_arr.push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	for (; start != end; start++)
			addNumber(*start);
}


unsigned int	Span::shortestSpan(void) const {
	if (_arr.empty() || _arr.size() < 2)
		throw std::out_of_range("Not enough elements in array");

	std::vector<int>::const_iterator start = _arr.begin();
	std::vector<int>::const_iterator next = start + 1;
	unsigned int shortest_span, tmp;

	shortest_span = *next - *start;
	start++;
	for (; start < _arr.end(); start++)
	{
		next = start + 1;
		tmp = *next - *start;
		if (tmp < shortest_span)
			shortest_span = tmp;
	}
	return shortest_span;
}

unsigned int	Span::longestSpan(void) const {
	if (_arr.empty() || _arr.size() < 2)
		throw std::out_of_range("Not enough elements in array");
	unsigned int max = *std::max_element(_arr.begin(), _arr.end());
	unsigned int min = *std::min_element(_arr.begin(), _arr.end());
	unsigned int res = max - min;
	return (res);

}

void	Span::display(void) {
	for (std::vector<int>::const_iterator i = _arr.begin(); i != _arr.end(); i++)
		std::cout << *i << std::endl;
}
