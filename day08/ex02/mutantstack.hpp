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
# include <string>
# include <vector>
# include <stack>

template <typename T>
class MutantStack {

	typedef T::const_iterator const_iterator;
	typedef T::iterator iterator;
	typedef T::reverse_iterator reverse_iterator;
	typedef T::const_reverse_iterator const_reverse_iterator;



	std::stack<T> _stck;
	unsigned int	_len;

	public:
		MutantStack(void);
		MutantStack(unsigned int len);
		MutantStack(MutantStack const & rhs);
		~MutantStack(void);

		MutantStack &	operator=(MutantStack const & rhs);

		void			display(void);

		typedef T::const_iterator	begin(void);
		typedef T::const_iterator	end(void);

};

#endif
