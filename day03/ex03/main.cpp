/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/23 14:50:34 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	DiamondTrap b("SwagStaf");
	b.takeDamage(50);
	b.beRepaired(35);
	b.highFivesGuys();
	b.guardGate();
	b.attack("Jim");
	b.whoAmI();
	std::cout << std::endl;
	DiamondTrap a;
	std::cout << a << std::endl;
	a = DiamondTrap("Swagstaf");
	a.whoAmI();


	return 0;
}
