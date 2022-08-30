/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:31:43 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/30 15:16:27 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    const Animal *j = new Dog();
    // const Animal *animal = new Animal();

    std::cout << j->getType() << " " << std::endl;

    j->makeSound();

    delete j;
    return 0;
}
