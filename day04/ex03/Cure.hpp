/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:39:11 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/27 14:16:57 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {

	public:
		Cure(void);
		Cure(Cure const & rhs);
		~Cure(void);
		Cure &	operator=(Cure const & rhs);

		virtual AMateria*	clone(void) const;
		virtual void use(ICharacter& target);
};

#endif
