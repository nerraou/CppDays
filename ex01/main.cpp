/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:54:01 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/22 20:49:19 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Libft.h"
#include "PhoneBook.h"

int main(void)
{
	PhoneBook phoneBook;
	std::string command;

	std::cout << "Enter a command please" << std::endl;
	std::cin >> command;
	CheckInput(command, phoneBook);

	return 0;
}