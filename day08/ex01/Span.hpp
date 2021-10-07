/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:32:35 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/07 21:50:46 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SAPN_HPP
# include <string>
# include <vector>

class Span {

	Span(void);
	std::vector<int> _arr;
	unsigned int	_len;


	public:
		Span(unsigned int len);
		Span(Span const & rhs);
		~Span(void);

		Span &	operator=(Span const & rhs);

		void	addNumber(int);
		void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		void			display(void);
};

#endif
