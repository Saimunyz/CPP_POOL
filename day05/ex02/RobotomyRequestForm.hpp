/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:04:01 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/28 22:04:51 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFOTM_HPP
# define ROBOTOMYREQUESTFOTM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form {

	std::string	_target;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & rhs);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);

		std::string const &	getTarget(void) const;
		void	execute(Bureaucrat const & executer) const;
};

#endif
