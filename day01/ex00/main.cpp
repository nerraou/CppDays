/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:45:39 by nerraou           #+#    #+#             */
/*   Updated: 2022/07/30 15:45:40 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string zombieName;
	std::cout << "enter the zombie name: ";
	std::cin >> zombieName;
	randomChump(zombieName);
	return 0;
}
