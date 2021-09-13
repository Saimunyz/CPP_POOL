/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:34:32 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/14 00:37:16 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	karen;
	if (argc == 2)
	{
		std::string level(argv[1]);
		karen.complain(level);
	}
	else
		std::cout << "Error argument" << std::endl;
	return (0);
}
