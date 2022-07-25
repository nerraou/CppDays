/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhayla <nouhayla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:54:01 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/24 17:20:24 by nouhayla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Libft.h"
#include "PhoneBook.h"

int main(void)
{
	PhoneBook phoneBook;
	std::string command;

	do
	{
		std::cout << "Enter a command please" << std::endl;
		std::getline(std::cin, command);
	} while (CheckInput(command, phoneBook) == 1);
	return 0;
}
