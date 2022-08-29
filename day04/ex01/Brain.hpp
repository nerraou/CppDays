/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:21:45 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/29 16:04:38 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    std::string *getIdeas();
    ~Brain();
};
