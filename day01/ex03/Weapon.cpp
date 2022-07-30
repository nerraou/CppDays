/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:21:46 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/30 18:08:10 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const &Weapon::getType()
{
	return this->_type;
}
void Weapon::setType(std::string newType)
{
	this->_type = newType;
}

Weapon::Weapon()
{
}

Weapon::Weapon(std::string newType)
{
	this->setType(newType);
}

Weapon::~Weapon()
{
}
