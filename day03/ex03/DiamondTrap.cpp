/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:26:44 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/21 19:53:20 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "Default constructor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap("DiamondTrap"), FragTrap("DiamondTrap")
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << "Name constructor DiamondTrap called" << std::endl;
}
