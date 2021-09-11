/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:56:49 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 01:07:44 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void) {
	contactAmount = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::addContact(void) {
	Contact		newContact;
	std::string	input;

	std::cout << "Enter your first name" << std::endl;
	std::cin >> input;
	newContact.setFirstName(input);

	std::cout << "Enter your last name" << std::endl;
	std::cin >> input;
	newContact.setLastName(input);

	std::cout << "Enter your nickname" << std::endl;
	std::cin >> input;
	newContact.setNickName(input);

	std::cout << "Enter your phone number" << std::endl;
	std::cin >> input;
	newContact.setPhoneNumb(input);

	std::cout << "Enter your darkest secret" << std::endl;
	std::cin >> input;
	newContact.setSecret(input);

	if (this->contactAmount < 8)
	{
		this->list[this->contactAmount] = newContact;
		this->contactAmount++;
	}
	else
		this->list[7] = newContact;
	std::cout << "New contact has been successfully added" << std::endl;
}

void	PhoneBook::howToUse(void) const {
	std::cout << "You can use these commands to navigate the book:" << std::endl;
	std::cout << "EXIT - for exit" << std::endl;
	std::cout << "ADD - to add a new contact" << std::endl;
	std::cout << "SEARCH - to search for a specific contact" << std::endl;
}

std::string	PhoneBook::truncNumber(std::string str) const {
	size_t	size;

	size = str.size();
	if (size > 10)
	{
		str = str.erase(9, size);
		return (str.append("."));
	}
	else
		return (str);
}

void	PhoneBook::displayContanctInfo(void) const {
	int		input;

	std::cout << std::endl;
	std::cout << "Enter an index of searching cantact: ";
	std::cin >> input;
	std::cout << std::endl;
	if (std::cin.good() && (input >= 0 && input < this->contactAmount))
	{
		std::cout << "Firs name: " << this->list[input].getFirstName() << std::endl;
		std::cout << "Last name: " << this->list[input].getLastName() << std::endl;
		std::cout << "Nickname: " << this->list[input].getNickName() << std::endl;
		std::cout << "Phone number: " << this->list[input].getPhoneNumb() << std::endl;
		std::cout << "Darkest secret: " << this->list[input].getSecret() << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Index not found" << std::endl;
	}

}

void	PhoneBook::searchContact(void) const {
	std::string firstName;
	std::string lastName;
	std::string nickName;

	if (this->contactAmount == 0)
		std::cout << "Your phone book is empty, you need to add a contact" << std::endl;
	else
	{
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		for (int i = 0; i < this->contactAmount; i++)
		{
			firstName = this->truncNumber(this->list[i].getFirstName());
			lastName = this->truncNumber(this->list[i].getLastName());
			nickName = this->truncNumber(this->list[i].getNickName());
			std::cout << "|" << std::setw(10) << i;
			std::cout << "|" << std::setw(10) << firstName;
			std::cout << "|" << std::setw(10) << lastName;
			std::cout << "|" << std::setw(10) << nickName;
			std::cout << "|" << std::endl;
		}
		this->displayContanctInfo();
	}
}

