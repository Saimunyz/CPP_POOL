/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 23:17:03 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/02 18:27:57 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include <iostream>

B::B(void) {
	std::cout << "B default constructor called" << std::endl;
}

B::~B(void) {
	std::cout << "B destructor called" << std::endl;
}
