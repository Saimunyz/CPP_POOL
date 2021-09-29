/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:37:11 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/29 15:53:21 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "Form.hpp"
# include <exception>

class Intern {

	public:

		class NotKnownForm : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("Intern doesn't know this kind of form");
				}
		};

		Intern(void);
		Intern(Intern const & rhs);
		~Intern(void);

		Intern &	operator=(Intern const & rhs);

		Form *	makeForm(std::string const name, std::string const target);
		Form *	makeShrubbery (std::string const target);
		Form *	makeRobotomy(std::string const target);
		Form *	makePresidential(std::string const target);

	private:
		struct func_l{
			std::string name;
			Form *	(Intern::*f)(std::string const target);
		};
		func_l	forms[3];
};

#endif
