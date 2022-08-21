/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:51:26 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/18 16:15:43 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("nouhayla");
	clap.takeDamage(5);
	clap.takeDamage(5);
	for (int i = 0; i <= 9; i++)
	{
		clap.attack("youssef");
	}
	clap.takeDamage(5);
	clap.beRepaired(5);

	return 0;
}