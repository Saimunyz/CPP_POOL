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

#include "MutantStack.hpp"
#include <iostream>
#include <stdexcept>
#include <algorithm>


template <typename T, typename container>
MutantStack<T, container>::MutantStack(void) {

}

template <typename T, typename container>
MutantStack<T, container>::~MutantStack(void) {

}

template <typename T, typename container>
MutantStack<T, container>::MutantStack(MutantStack const & rhs) {
	*this = rhs;
}

template <typename T, typename container>
MutantStack<T, container> &	MutantStack<T, container>::operator=(MutantStack const & rhs) {
	if (this == &rhs)
		return *this;
	std::stack<T, container>::operator=(rhs);
	return *this;
}

template <typename T, typename container>
typename MutantStack<T, container>::iterator	begin(void) {

}

template <typename T, typename container>
typename MutantStack<T, container>::iterator	end(void) {
	return this->c.begin();
}


