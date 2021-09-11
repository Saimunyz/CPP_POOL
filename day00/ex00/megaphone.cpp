/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:51:59 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/11 21:03:00 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for (int i = 1;  i < argc; i++)
		{
			for (size_t j = 0; j < strlen(argv[i]); j++)
				std::cout << (char) toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
