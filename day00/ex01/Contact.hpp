/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 20:51:36 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 00:40:49 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACN_HPP
# define CONTACN_HPP

# include <istream>

class Contact {

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

	public:

		Contact(void);
		~Contact(void);

		std::string getFirstName(void) const;
		void setFirstName(std::string str);

		std::string getLastName(void) const;
		void setLastName(std::string str);

		std::string getNickName(void) const;
		void setNickName(std::string str);

		std::string getPhoneNumb(void) const;
		void setPhoneNumb(std::string str);

		std::string getSecret(void) const;
		void setSecret(std::string str);
};

#endif
