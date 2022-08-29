/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:31:43 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/29 17:32:01 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    const Dog *j = new Dog();
    Dog d;

    d = *j;

    std::cout << j->getType() << " " << std::endl;

    j->makeSound();

    delete j;
    return 0;
}
