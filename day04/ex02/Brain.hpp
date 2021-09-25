/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:49:56 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/25 15:40:20 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain {

	std::string	_ideas[100];

	public:

		Brain(void);
		~Brain(void);
		Brain(Brain const & rhs);
		Brain &	operator=(Brain const & rhs);

		std::string	getIdea(unsigned int idea) const;
		void	setIdea(std::string idea);

};

#endif
