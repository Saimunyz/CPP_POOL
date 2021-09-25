/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:20:51 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 18:37:14 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {

	public:
		Ice(void);
		Ice(Ice const & rhs);
		~Ice(void)
		Ice &	operator=(Ice const & rhs);

		virtual AMateria*	clone(void) const;
		virtual void use(ICharacter& target);
};

#endif
