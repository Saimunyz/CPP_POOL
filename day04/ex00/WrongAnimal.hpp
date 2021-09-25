/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:05:44 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 14:07:07 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

class WrongAnimal {


	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & rhs);
		~WrongAnimal(void);
		WrongAnimal & operator=(WrongAnimal const & rhs);

		void	setType(std::string type);
		std::string	getType(void) const;

		void	makeSound(void) const;

	protected:
		std::string	_type;
};

#endif
