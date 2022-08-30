/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:04:10 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/29 17:30:33 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: Default constructor called" << std::endl;
}
Brain::Brain(const Brain &other)
{
    std::cout << "Brain: Copy constructor called" << std::endl;
    *this = other;
}

std::string *Brain::getIdeas()
{
    return (this->ideas);
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain: Copy assignement operator called" << std::endl;
    (void)other;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain: Destructor called" << std::endl;
}