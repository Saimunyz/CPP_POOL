/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:28:25 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 17:05:05 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include "Bureaucrat.hpp"

class Form {

	public:

		class GradeTooHighException : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("The grade value is too high for this Form");
				}
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char* what() const throw() {
					return ("The grade value is too low for this Form");
				}
		};

	private:
		bool					_signed;
		std::string const		_name;
		unsigned int const		_grade_to_sign;
		unsigned int const		_grade_to_exec;

	public:
		Form(void);
		Form(std::string,unsigned int, unsigned int);
		Form(Form const & rhs);
		virtual ~Form(void);

		Form &	operator=(Form const & rhs);

		unsigned int		getGradeToSign(void) const;
		unsigned int		getGradeToExec(void) const;
		std::string	const	getName(void) const;
		bool				isSigned(void) const;
		void				beSigned(Bureaucrat const & b);
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
