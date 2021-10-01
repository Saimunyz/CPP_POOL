/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swagstaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:04:14 by swagstaf          #+#    #+#             */
/*   Updated: 2021/10/01 22:44:49 by swagstaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct s_Data
{
	int	num;
}				Data;


uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


Data *	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data	data;
	Data	*ptr;
	uintptr_t	tmp;

	data.num = 10;
	std::cout << "Data num is: " << data.num << std::endl;
	std::cout << "Data address is: " << &data << std::endl;

	tmp = serialize(&data);
	std::cout << "Serialized value is: " << tmp << std::endl;

	ptr = deserialize(tmp);
	std::cout << "Unserialized value is: " << ptr << std::endl;
	std::cout << "Ptr num is: " << ptr->num << std::endl;
	if (ptr == &data)
		std::cout << "adress is equal" << std::endl;
	else
		std::cout << "failure" <<std::endl;

	return 0;
}
