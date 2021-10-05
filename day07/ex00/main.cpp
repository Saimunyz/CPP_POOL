/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/05 16:29:04 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

template <typename T>
void	swap(T & a, T & b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &	min(T const & a, T const & b)
{
	if (a > b)
		return b;
	return a;
}

template <typename T>
T const &	max(T const & a, T const & b)
{
	if (a > b)
		return a;
	return b;
}

int	main(void)
{
	int i_a = 4, i_b = 2;
	char c_a = 'a', c_b = 'b';
	float f_a = 4.5f, f_b = 2.5f;

	std::cout << "Int: a is " << i_a << " -- b is " << i_b << std::endl ;
	std::cout << "Char: a is " << c_a << " -- b is " << c_b << std::endl ;
	std::cout << "Float: a is " << f_a << " -- b is " << f_b << std::endl ;

	std::cout << std::endl;

	std::cout << "MIN" << std::endl;
	std::cout << "Int: " << min(i_a, i_b) << std::endl ;
	std::cout << "Char: " << min(c_a, c_b) << std::endl ;
	std::cout << "Float: " << min(f_a, f_b) << std::endl ;

	std::cout << std::endl;

	std::cout << "MAX" << std::endl;
	std::cout << "Int: " << max(i_a, i_b) << std::endl ;
	std::cout << "Char: " << max(c_a, c_b) << std::endl ;
	std::cout << "Float: " << max(f_a, f_b) << std::endl ;

	std::cout << std::endl;

	std::cout << "SWAP" << std::endl;

	swap(i_a, i_b);
	swap(c_a, c_b);
	swap(f_a, f_b);

	std::cout << "Int: a is " << i_a << " -- b is " << i_b << std::endl ;
	std::cout << "Char: a is " << c_a << " -- b is " << c_b << std::endl ;
	std::cout << "Float: a is " << f_a << " -- b is " << f_b << std::endl ;

	return 0;
}
