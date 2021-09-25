/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:04:21 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 16:13:48 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	Brain*	_brain;

	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & rhs);
		Dog &	operator=(Dog const & rhs);

		void	setIdea(std::string);
		std::string	getIdea(unsigned int) const;

		virtual void	makeSound(void) const;
};

#endif
