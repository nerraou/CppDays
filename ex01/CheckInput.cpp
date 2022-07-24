/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckInput.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhayla <nouhayla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:45:33 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/24 17:36:02 by nouhayla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Libft.h"
#include <cstdlib>

void handelAdd(PhoneBook &phoneBook)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string PhoneNumber;
	std::string darkestSecret;

	std::cout << "Enter your first name: " << std::endl;
	std::getline(std::cin, firstName);
	std::cout << "Enter your last name: " << std::endl;
	std::getline(std::cin, lastName);
	std::cout << "Enter your nickname: " << std::endl;
	std::getline(std::cin, nickName);
	std::cout << "Enter your phone number: " << std::endl;
	std::getline(std::cin, PhoneNumber);
	std::cout << "Enter your darkest secret: " << std::endl;
	std::getline(std::cin, darkestSecret);
	phoneBook.AddContact(firstName, lastName, nickName, PhoneNumber, darkestSecret);
	std::cout << "contact added successfully ." << std::endl;
}

int CheckInput(std::string argv, PhoneBook &phoneBook)
{
	std::string ContactIndex;

	if (argv.compare("ADD") == 0)
	{
		handelAdd(phoneBook);
	}
	else if (argv.compare("SEARCH") == 0)
	{
		phoneBook.DisplayContacts();
		std::cout << "choose an index: " << std::endl;
		std::getline(std::cin, ContactIndex);
		phoneBook.DisplayContact(atoi(ContactIndex.c_str()));
	}
	else if (argv.compare("EXIT") == 0)
	{
		std::cout << "exit" << std::endl;
		return 0;
	}
	return 1;
}
