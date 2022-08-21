/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:51:29 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/21 14:34:12 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		this->energyPoint--;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "Sorry you can not play!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		this->attackDamage += amount;
		std::cout << "ClapTrap " << this->getName() << " take " << this->attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "Sorry you can not play!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		this->energyPoint--;
		this->hitPoint += amount;
		std::cout << "ClapTrap " << this->getName() << " take " << this->hitPoint << " hit points!" << std::endl;
	}
	else
	{
		std::cout << "Sorry you can not play!" << std::endl;
	}
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	std::cout << "Copy assignement operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &in)
{
	out << in.getName();
	return (out);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
