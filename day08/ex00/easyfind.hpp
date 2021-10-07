/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:32:35 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/07 15:31:27 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

template <typename T>
typename T::const_iterator	easyfind(T v1, int v2) {
	if (v1.empty())
		throw "First parametr is empty";
	typename T::const_iterator it = find(v1.begin(), v1.end(), v2);
	if (it == v1.end() && *it != v2)
		throw "there is no second parametr in first";
	return it;
}

#endif
