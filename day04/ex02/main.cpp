/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 17:49:39 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int	main(void)
{
	Dog	dog;
	Cat	cat;
	Animal *animals[2];

	dog.setIdea("Dog first idea");
	cat.setIdea("Cat first idea");

	animals[0] = new Dog(dog);
	animals[1] = new Cat(cat);

	dog.setIdea("Dog second idea");
	cat.setIdea("Cat second idea");

	for (int i = 0; i < 2; i++)
	{
		std::cout << animals[i]->getType() << " makes ";
		animals[i]->makeSound();
	}

	std::cout << std::endl << "Before delete animals" << std::endl << std::endl;

	for (int i = 0; i < 2; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	std::cout << "After delete animals" << std::endl << std::endl;

	return 0;
}
