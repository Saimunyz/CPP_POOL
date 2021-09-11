/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:20:56 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 00:39:12 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class  PhoneBook{

	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	addContact(void);
		void	searchContact(void) const;
		void	howToUse(void) const;

	private:
		Contact	list[8];
		void	displayContanctInfo(void) const;
		std::string	truncNumber(std::string number) const;
		int		contactAmount;
};

#endif
