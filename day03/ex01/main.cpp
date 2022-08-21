/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:55:02 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/21 14:38:25 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("noha");
	scav.takeDamage(9);
	scav.attack("youssef");
	scav.beRepaired(5);
	scav.guardGate();
	return 0;
}
