/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:51:47 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/18 21:59:37 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
# define DIAMOND_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	std::string	_name;

	public:

		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & rhs);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & rhs);

		void	attack(std::string const & target);
		void	whoAmI(void);
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs);

#endif
