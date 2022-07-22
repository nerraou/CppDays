/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:33:59 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/22 20:49:50 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"

class PhoneBook
{
	Contact ContactsArray[8];
	int index;

public:
	PhoneBook(void);
	void AddContact(std::string firstName, std::string lastName, std::string nickName,
					std::string phonenumber, std::string darkestSecret);
	int getContact(int contactIndex);
	void DisplayContact(int contactIndex);
	void DisplayContacts();
	void DisplayField(std::string str);
};

#endif
