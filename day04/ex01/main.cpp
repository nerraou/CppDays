/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:31:43 by nerraou           #+#    #+#             */
/*   Updated: 2022/09/08 14:10:10 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	Animal *animal[6];
	int i;

	for (i = 0; i < 3; i++)
	{
		animal[i] = new Dog();
	}
	for (; i < 6; i++)
	{
		animal[i] = new Cat();
	}

	for (int i = 0; i < 6; i++)
	{
		std::cout << animal[i]->getType() << std::endl;
		animal[i]->makeSound();
	}

	for (int i = 0; i < 6; i++)
	{
		delete animal[i];
	}

	return 0;
}
