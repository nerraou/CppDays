/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckInput.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:45:33 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/22 20:50:39 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Libft.h"

void handelAdd(PhoneBook phoneBook)
{
}

int CheckInput(std::string argv, PhoneBook phoneBook)
{

	if (argv.compare("ADD") == 0)
	{
		phoneBook.AddContact()
	}
	else if (argv.compare("SEARCH") == 0)
	{
		std::cout << "search\n";
	}
	else if (argv.compare("EXIT") == 0)
	{
		std::cout << "exit\n";
		return 0;
	}
	return 1;
}
