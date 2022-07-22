/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:35:32 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/22 19:42:33 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
public:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string DarkestSecret;
	std::string PhoneNumber;
};

#endif