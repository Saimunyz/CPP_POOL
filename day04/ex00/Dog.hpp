/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:04:21 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/24 21:52:01 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & rhs);
		Dog &	operator=(Dog const & rhs);

		virtual void	makeSound(void) const;
};

#endif
