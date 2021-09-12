/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 23:16:17 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/13 00:18:45 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {

	std::string	_type;

	public:

		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		std::string const	&getType(void) const;
		void setType(std::string type);

};

#endif
