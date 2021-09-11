/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:22:07 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 00:53:40 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	std::string input;
	PhoneBook	myBook;

	std::cout << "Welcome to a PhoneBook" << std::endl;
	myBook.howToUse();
	while (1)
	{
		std::cout << std::endl;
		std::cout << "You are in the menu: enter ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("ADD") == 0)
			myBook.addContact();
		else if (input.compare("SEARCH") == 0)
			myBook.searchContact();
		else
			std::cout << "You entered something wrong, please try again" << std::endl;
	}
	return (0);
}
