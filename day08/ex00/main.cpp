/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/07 15:31:40 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>


int	main(void)
{
	std::list<int>	lst;

	for (int i = 0; i < 10; i++)
		lst.push_back(i);

	std::list<int>::const_iterator i = easyfind(lst, 2);

	std::cout << *i <<std::endl;

try
{
	std::vector<int>	vect;

	for (int i = 0; i < 10; i++)
		vect.push_back(i);

	std::vector<int>::const_iterator i = easyfind(vect, -1);

	std::cout << *i <<std::endl;
}
catch(const char * e)
{
	std::cerr << e << std::endl;
}

try
{
	std::vector<int>	vect;

	std::vector<int>::const_iterator i = easyfind(vect, 2);

	std::cout << *i <<std::endl;
}
catch(const char * e)
{
	std::cerr << e << std::endl;
}

	return 0;
}
