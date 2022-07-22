/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:45:04 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/22 20:42:03 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook(void)
{
	index = 0;
}

void PhoneBook::AddContact(std::string firstName, std::string lastName, std::string nickName,
						   std::string phonenumber, std::string darkestSecret)
{
	if (index > 8)
		index = 0;
	else
		index++;
	ContactsArray[index].DarkestSecret = darkestSecret;
	ContactsArray[index].firstName = firstName;
	ContactsArray[index].lastName = lastName;
	ContactsArray[index].nickName = nickName;
	ContactsArray[index].PhoneNumber = phonenumber;
}

int PhoneBook::getContact(int contactIndex)
{
	if (contactIndex >= 0 && contactIndex <= 7)
		return 1;
	return -1;
}

void PhoneBook::DisplayContact(int contactIndex)
{
	if (getContact(contactIndex) == -1)
		std::cout << "This index is out of range, please chopse an index between 0 and 7" << std::endl;
	else
	{
		std::cout << ContactsArray[contactIndex].firstName << std::endl;
		std::cout << ContactsArray[contactIndex].lastName << std::endl;
		std::cout << ContactsArray[contactIndex].nickName << std::endl;
		std::cout << ContactsArray[contactIndex].DarkestSecret << std::endl;
		std::cout << ContactsArray[contactIndex].PhoneNumber << std::endl;
	}
}

void PhoneBook::DisplayField(std::string str)
{
	int len;
	int min;

	min = 0;
	len = str.length();
	if (len > 10)
	{
		std::cout << str.substr(0, 9) << ".";
	}

	else
	{
		min = len - 10;
		while (min)
		{
			std::cout << " ";
			min--;
		}
		std::cout << str;
	}
}

void PhoneBook::DisplayContacts()
{
	int i;

	i = 0;
	while (i < index)
	{
		std::cout << "         " << i;
		DisplayField(ContactsArray[i].firstName);
		std::cout << "|";
		DisplayField(ContactsArray[i].lastName);
		std::cout << "|";
		DisplayField(ContactsArray[i].nickName);
		std::cout << std::endl;
	}
}