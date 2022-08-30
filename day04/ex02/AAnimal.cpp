/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:26:06 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/30 15:19:41 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "AAnimal: Copy constructor called" << std::endl;
    *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "AAnimal: Copy assignement operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal: Destructor called" << std::endl;
}