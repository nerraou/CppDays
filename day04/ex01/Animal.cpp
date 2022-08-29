/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:26:06 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/29 16:05:35 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal: Copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal: Copy assignement operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal make sound" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}