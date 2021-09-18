/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/18 18:51:53 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	DiamondTrap a;
	//std::cout << ClapTrap::a << std::endl;
	a = DiamondTrap("Swagstaf");
	a.attack("Jim");
	a.ScavTrap::takeDamage(5);
	a.ScavTrap::beRepaired(20);
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();

	return 0;
}
