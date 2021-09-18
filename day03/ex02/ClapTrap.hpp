/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:37:22 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/17 17:10:47 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {

	protected:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy;
		unsigned int	_damage;

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & rhs);
		~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const & rhs);

		void setName(std::string);
		std::string getName(void) const;
		void setHitpoints(unsigned int);
		unsigned int getHitpoints(void) const;
		void setEnergy(unsigned int);
		unsigned int getEnergy(void) const;
		void setDamage(unsigned int);
		unsigned int getDamage(void) const;

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs);
#endif
