/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:00:51 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 16:13:37 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	Brain*	_brain;

	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const & rhs);
		Cat &	operator=(Cat const & rhs);

		void	setIdea(std::string);
		std::string	getIdea(unsigned int) const;

		virtual void	makeSound(void) const;

};

#endif
