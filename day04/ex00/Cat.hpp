/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:20:25 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/28 17:42:35 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
public:
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    std::string getType() const;
    void makeSound() const;
    ~Cat();
};
