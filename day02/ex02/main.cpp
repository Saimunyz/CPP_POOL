/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/16 00:27:49 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a is " << a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "--a is " << --a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a-- is " << a-- << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << "max is " << Fixed::max( a, b ) << std::endl;
	std::cout << "min is " << Fixed::min( a, b ) << std::endl;

	Fixed c (Fixed(10.1016f) / Fixed( 2 ));

	std::cout << "c is " << c << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << "c + b is " << c + b << std::endl;
	std::cout << "c - b is " << c - b << std::endl;
	bool z = c > b;
	std::cout << "c > b is " << z << std::endl;
	z = c < b;
	std::cout << "c < b is " << z << std::endl;
	z = c <= b;
	std::cout << "c <= b is " << z << std::endl;
	z = c <= c;
	std::cout << "c <= c is " << z << std::endl;
	z = c == c;
	std::cout << "c == c is " << z << std::endl;
	z = c >= c;
	std::cout << "c >= c is " << z << std::endl;
	z = c >= b;
	std::cout << "c >= b is " << z << std::endl;
	z = c == b;
	std::cout << "c == b is " << z << std::endl;
	z = c != c;
	std::cout << "c != c is " << z << std::endl;
	z = c != b;
	std::cout << "c != b is " << z << std::endl;

	return 0;
}
