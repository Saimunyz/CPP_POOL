/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:35:02 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/12 21:58:21 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

	std::string	name;

	public:

		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
