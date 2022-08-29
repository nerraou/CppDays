/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:03:10 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/28 17:48:17 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog: Copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog: Copy assignement operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "Dog bark" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog: Destructor called" << std::endl;
}
