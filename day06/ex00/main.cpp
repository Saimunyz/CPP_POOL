/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/01 22:05:11 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <climits>
#include <cfloat>
#include <cmath>

void	convertToChar(std::string input)
{
	double	d;
	char	c;
	char	*word;
	try
	{
		d = (std::strtod(input.c_str(), &word));
		if (d > CHAR_MAX || d < 0 || (*word && *word != 'f') || std::isnan(d))
			throw "impossible";
		c = static_cast<char>(d);
		if (isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			throw "Non displayable";
	}
	catch(const char* exception)
	{
		std::cerr << "char: " << exception << std::endl;
	}
}

void	convertToInt(std::string input)
{
	double	i;
	char	*word;
	try
	{

		i = std::strtod(input.c_str(), &word);
		if (i > INT_MAX || i < INT_MIN || (*word && *word != 'f') || std::isnan(i))
			throw "impossible";
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	}
	catch(const char* exception)
	{
		std::cerr << "int: " << exception << std::endl;
	}
}

void	convertToFloat(std::string input)
{
	float	f;
	char	*word;
	try
	{
		f = std::strtof(input.c_str(), &word);
		if (((f > FLT_MAX  || f < 0) && !std::isinf(f)) || (*word && *word != 'f'))
			throw "impossible";
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
	}
	catch(const char* exception)
	{
		std::cerr << "float: " << exception << std::endl;
	}
}

void	convertToDouble(std::string input)
{
	double	d;
	char	*word;
	try
	{
		d = std::strtod(input.c_str(), &word);
		if (((d > DBL_MAX || d < 0) && !std::isinf(d)) || (*word && *word != 'f'))
			throw "impossible";
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
	}
	catch(const char* exception)
	{
		std::cerr << "double: " << exception << std::endl;
	}
}


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return (1);
	}

	std::string	input(argv[1]);

	convertToChar(input);
	convertToInt(input);
	convertToFloat(input);
	convertToDouble(input);

	return 0;
}
