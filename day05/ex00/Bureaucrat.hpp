/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:11:20 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 15:19:51 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <stdexcept>

class Bureaucrat {

	public:

		class GradeTooHighException : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("The grade value can't be grater than 1");
				}
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("The grade value can't be less than 150");
				}
		};

		Bureaucrat(void);
		Bureaucrat(std::string);
		Bureaucrat(std::string, unsigned int);
		Bureaucrat(Bureaucrat const & rhs);
		virtual	~Bureaucrat(void);

		Bureaucrat &	operator=(Bureaucrat const & rhs);

		void		setGrade(unsigned int grade);
		unsigned int		getGrade(void) const;
		std::string	const getName(void) const;
		void		incrGrade(void);
		void		decrGrade(void);

	protected:
		std::string const	_name;
		unsigned int				_grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
