/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:26:44 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/28 15:02:20 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "Default constructor DiamondTrap called" << std::endl;
}

int DiamondTrap::getEnergyPoint() const
{
	return ScavTrap::getEnergyPoint();
}

int DiamondTrap::getHitPoint() const
{
	FragTrap *f = (FragTrap*)this;
	return f->getHitPoint();
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap("DiamondTrap"), ScavTrap("DiamondTrap")
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << "Name constructor DiamondTrap called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamTrap called" << std::endl;
}