/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:46:26 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 17:41:38 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal {


	public:
		Animal(void);
		Animal(Animal const & rhs);
		virtual	~Animal(void);
		Animal & operator=(Animal const & rhs);

		void	setType(std::string type);
		std::string	getType(void) const;

		virtual void	makeSound(void) const = 0;

	protected:
		std::string	_type;
};

#endif
