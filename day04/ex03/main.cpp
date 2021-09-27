/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/27 16:28:13 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main(void)
{
	IMateriaSource*	src = new MateriaSource();
	ICharacter*		me = new Character("Me");
	AMateria*		tmp;
	ICharacter*		bob = new Character("bob");

	std::cout << std::endl;

	Cure*	cure = new Cure();
	Ice*	ice = new Ice();

	std::cout << std::endl;

	src->learnMateria(ice);
	src->learnMateria(cure);

	std::cout << std::endl;

	delete cure;
	delete ice;

	std::cout << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl;

	me->use(-1, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << std::endl;

	me->unequip(2);
	me->unequip(2);

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	std::cout << std::endl;

	delete tmp;

	std::cout << std::endl;

	delete bob;

	std::cout << std::endl;

	delete me;

	std::cout << std::endl;

	delete src;

	std::cout << std::endl;

	return 0;
}
