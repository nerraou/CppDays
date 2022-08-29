/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:20:25 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/28 17:42:35 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &other);
    std::string getType() const;
    void makeSound() const;
    ~WrongCat();
};
