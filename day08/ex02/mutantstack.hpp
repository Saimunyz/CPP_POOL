/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:32:35 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/07 17:38:14 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <stack>
#include <string>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container> {

	public:

		typedef typename std::stack<T, container>::container_type::iterator iterator;
		typedef typename std::stack<T, container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, container>::container_type::const_reverse_iterator const_reverse_iterator;


		MutantStack(void);
		MutantStack(MutantStack const & rhs);
		~MutantStack(void);

		MutantStack &	operator=(MutantStack const & rhs);

		iterator	begin(void) {this->c.begin()};
		iterator	end(void) {this->c.end()};

};

#endif
