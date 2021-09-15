/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:03:04 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/15 16:29:57 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <math.h>

class Fixed {

	int					_value;
	static int const	_bits;

	public:

		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & rhs);
		Fixed(int const value);
		Fixed(float const value);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed &	operator=(Fixed const & rhs);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
