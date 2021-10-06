/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:12:06 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/06 14:09:04 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
private:
	T				*_array;
	unsigned int	_length;

public:
	Array(void);
	Array(unsigned int len);
	Array(Array const & rhs);
	~Array(void);

	Array &	operator=(Array const & rhs);
	T &	operator[](unsigned int index);

	unsigned int	size(void) const;
};

#endif
