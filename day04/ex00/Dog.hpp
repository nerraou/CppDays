/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:20:46 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/28 17:49:29 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    std::string getType() const;
    void makeSound() const;
    ~Dog();
};
