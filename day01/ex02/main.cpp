/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:34:32 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 23:13:13 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "This is REF address: " << &stringREF << std::endl;
	std::cout << "This is PTR address: " << stringPTR << std::endl;

	std::cout << "This is REF value: " << stringREF << std::endl;
	std::cout << "This is PTR value: " << *stringPTR << std::endl;

	return (0);
}
