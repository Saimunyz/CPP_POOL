/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:54:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 18:46:33 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIAL_HPP
# define AMATERIAL_HPP
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;


	public:
		AMateria(AMateria const & rhs);
		AMateria(std::string const & type);
		AMateria(void);
		~AMateria(void);
		AMateria &	operator=(AMateria const & rhs);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

std::ostream &	operator<<(std::ostream & o, AMateria const & rhs);

#endif
