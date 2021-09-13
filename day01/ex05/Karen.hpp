/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:22:17 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/13 22:30:55 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen {

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:

		Karen(void);
		~Karen(void);
		void	complain(std::string level);

}

#endif
