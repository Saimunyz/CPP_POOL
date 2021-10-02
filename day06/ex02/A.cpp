/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 23:16:10 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/02 18:28:26 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include <iostream>

A::A(void) {
	std::cout << "A default constructor called" << std::endl;
}

A::~A(void) {
	std::cout << "A destructor called" << std::endl;
}
