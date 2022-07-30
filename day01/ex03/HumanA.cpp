/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:29:55 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/30 18:53:54 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name = name;
	this->weapon = &weapon;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::~HumanA()
{
}
