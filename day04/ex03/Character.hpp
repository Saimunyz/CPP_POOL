/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:47:37 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/27 15:15:30 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include <string>

class Character : public ICharacter {

	std::string	_name;
	AMateria*	_materias[4];
	size_t		_amount;

	public:
		Character(void);
		Character(std::string name);
		Character(Character const & rhs);
		virtual ~Character(void);
		Character &	operator=(Character const & rhs);

		std::string	const & getName() const;
		void	equip(AMateria * m);
		void	unequip(int idx);
		void	use(int idx, ICharacter & target);
};

#endif
