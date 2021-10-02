/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 23:17:17 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/02 18:28:21 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"
#include <iostream>

C::C(void) {
	std::cout << "C default constructor called" << std::endl;
}

C::~C(void) {
	std::cout << "C destructor called" << std::endl;
}
