/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/05 17:38:39 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <iomanip>

template <typename T>
void	iter(T * arr, int len, void (*f)(T const & value))
{
	for (int i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

template <typename T>
void	display(T const & value)
{
	std::setprecision(1);
	std::cout << value << std::endl;
}

int	main(void)
{
	int i_mas[] = {4, 2, 3, 1, 5};
	char c_mas[] = {'h', 'e', 'l', 'l', '!'};
	float f_mas[] = {4.2f, 2.1f, 3.5f, 1.2f, 5.6f};


	iter(i_mas, 5, display);

	std::cout << std::endl;

	iter(c_mas, 5, display);

	std::cout << std::endl;

	iter(f_mas, 5, display);
	return 0;
}
