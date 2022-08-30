/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:32:46 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/29 17:02:07 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat: Default constructor Animal called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat: Copy assignement operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Cat Meow" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat: Destructor Animal called" << std::endl;
}