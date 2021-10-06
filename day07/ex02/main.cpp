/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/06 16:47:47 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Array.hpp"
#include <stdexcept>

template <typename T>
Array<T>::Array(void) : _array(NULL), _length(0) {
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int len) : _array(new T[len]), _length(len) {
	std::cout << "Array constructor called with len equal - " << len << std::endl;
	std::cout << "Array contains:" << std::endl;
	std::setprecision(1);
	for (unsigned int i = 0; i < len; i++)
	{
		this->_array[i] = 0;
		std::cout << _array[i] << std::endl;
	}
}

template <typename T>
Array<T>::~Array(void) {
	std::cout << "Array destructor called" << std::endl;
	delete [] _array;
}

template <typename T>
unsigned int	Array<T>::size(void) const {
	return _length;
}

template <typename T>
Array<T>::Array(Array const & rhs) {
	std::cout << "Array copy constructor" << std::endl;
	*this = rhs;
}

template <typename T>
Array<T> &	Array<T>::operator=(Array const & rhs) {
	if (this == &rhs)
		return *this;
	this->_length = rhs._length;
	this->_array =  new T[rhs._length];
	for (unsigned int i = 0; i < _length; i++)
		this->_array[i] = rhs._array[i];
	return *this;
}

template <typename T>
T &	Array<T>::operator[](unsigned int index) {
	if (index < 0 || index >= _length)
		throw std::out_of_range("Index out of range");
	return this->_array[index];
}


int	main(void)
{
	Array<int>	intArr(10);
	Array<double>	doubleArr(10);

	for (unsigned int i = 0; i < intArr.size(); i++)
	{
		intArr[i] = i;
		doubleArr[i] = i + 0.5f;
	}

	std::cout << "Int elem\tDouble elem" << std::endl;
	for (unsigned int i = 0; i < intArr.size(); i++)
	{
		std::cout << intArr[i] << "\t\t" << doubleArr[i] << std::endl;
	}

	std::cout << std::endl;

	Array<int>	newIntArr(intArr);
	Array<double>	newDoubleArr(doubleArr);

	std::cout << "Int elem\tDouble elem" << std::endl;
	for (unsigned int i = 0; i < intArr.size(); i++)
	{
		std::cout << newIntArr[i] << "\t\t" << newDoubleArr[i] << std::endl;
	}

	std::cout << std::endl;


	for (unsigned int i = 0; i < intArr.size(); i++)
	{
		newIntArr[i] += 2;
		newDoubleArr[i] += 2;
	}

	std::cout << "Int elem\tDouble elem | newInt elem\tnewDouble elem" << std::endl;
	for (unsigned int i = 0; i < intArr.size(); i++)
	{
		std::cout << intArr[i] << "\t\t" << doubleArr[i] << " \t    |\t ";
		std::cout << newIntArr[i] << "\t\t" << newDoubleArr[i] << std::endl;
	}

	return 0;
}
