/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 23:26:18 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/13 00:17:13 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA {

	std::string _name;
	Weapon &	_weapon;

	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
};

#endif
