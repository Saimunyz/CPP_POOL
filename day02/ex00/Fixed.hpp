/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:03:04 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/15 15:28:57 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	int			_value;
	int const	_bits;

	public:

		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & rhs);
		Fixed &	operator=(Fixed const & rhs);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
