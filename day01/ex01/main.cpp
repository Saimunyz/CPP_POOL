/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:34:32 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 23:01:02 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	myZombieHord;
	int		N = 10;

	myZombieHord = zombieHorde(N, "bob");
	for (int i = 0; i < N; i++)
			myZombieHord[i].announce();
	delete [] myZombieHord;

	return (0);
}
