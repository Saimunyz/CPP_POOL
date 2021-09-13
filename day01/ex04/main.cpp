/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:34:32 by swagstaf          #+#    #+#             */
/*   Updated: 2021/09/13 22:15:48 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	strUpper(std::string str) {
	std::string new_str = str;

	for (size_t i = 0; i < str.size(); i++)
		new_str[i] =  toupper(new_str[i]);
	return (new_str);
}

void	ft_replace(char **argv)
{
	std::ifstream	i_file;
	std::ofstream	o_file;
	std::string		filename(argv[1]), s1(argv[2]), s2(argv[3]);
	std::string		line;
	std::string		new_line;
	size_t			i;
	size_t			size = s1.size();

	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Empty string arguments" << std::endl;
		return ;
	}
	i_file.open(filename.c_str(), std::ifstream::in);
	if(!i_file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return ;
	}
	o_file.open((strUpper(filename) + ".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	if(!o_file.is_open())
	{
		i_file.close();
		std::cout << "Error opening file" << std::endl;
		return ;
	}
	while (getline(i_file, line))
	{
		while (s1.compare(s2) && (i = line.find(s1)) != std::string::npos)
		{
			new_line.clear();
			new_line.append(line, 0, i);
			new_line.append(s2);
			new_line.append(line, i + size, line.size() - size);
			line = new_line;
		}
		o_file << line << std::endl;
	}
	i_file.close();
	o_file.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
		ft_replace(argv);
	else
		std::cout << "Wrong arguments" << std::endl;
	return (0);
}
