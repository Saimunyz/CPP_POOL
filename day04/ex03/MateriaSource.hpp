/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:27:36 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/27 15:13:36 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	AMateria*	_materias[4];
	size_t		_amount;

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & rhs);
		virtual ~MateriaSource(void);
		MateriaSource &	operator=(MateriaSource const & rhs);

		void	learnMateria(AMateria * m);
		AMateria *	createMateria(std::string const & type);
};

#endif
