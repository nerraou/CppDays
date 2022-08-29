/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:32:46 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/29 13:54:29 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat: Default constructor Animal called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat: Copy constructor called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat: Copy assignement operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

std::string WrongCat::getType() const
{
    return (this->type);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Meow" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor Animal called" << std::endl;
}