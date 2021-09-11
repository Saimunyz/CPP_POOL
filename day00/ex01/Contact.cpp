/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:48:13 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/11 22:22:19 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void){
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string Contact::getFirstName(void) const{
	return (this->_first_name);
}

std::string Contact::getLastName(void) const{
	return (this->_last_name);
}

std::string Contact::getNickName(void) const{
	return (this->_nickname);
}

std::string Contact::getPhoneNumb(void) const{
	return (this->_phone_number);
}

std::string Contact::getSecret(void) const{
	return (this->_darkest_secret);
}

void Contact::setFirstName(std::string str) {
	this->_first_name = str;
}

void Contact::setLastName(std::string str) {
	this->_last_name = str;
}

void Contact::setNickName(std::string str) {
	this->_nickname = str;
}

void Contact::setPhoneNumb(std::string str) {
	this->_phone_number = str;
}

void Contact::setSecret(std::string str) {
	this->_darkest_secret = str;
}

