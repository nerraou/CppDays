/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:44:34 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/21 18:14:19 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("noha");

	frag.takeDamage(5);
	frag.attack(frag.getName());
	frag.beRepaired(6);
	frag.highFivesGuys();
	return 0;
}