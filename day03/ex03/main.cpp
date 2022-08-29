/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:44:34 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/28 15:00:00 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d;

	std::cout << d.getEnergyPoint() << std::endl;
	std::cout << d.getHitPoint() << std::endl;

	return 0;
}