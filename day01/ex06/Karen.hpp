/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:22:17 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/14 00:26:33 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen {

	std::string	level_list[4];
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:

		Karen(void);
		~Karen(void);
		void	complain(std::string level);

};

#endif
