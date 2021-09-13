/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:34:32 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/14 00:14:40 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen	karen;

	karen.complain("DEBUG");
	std::cout << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;
	karen.complain("ERROR");
	std::cout << std::endl;
	karen.complain("123");
	return (0);
}
