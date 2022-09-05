/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:05:42 by nerraou           #+#    #+#             */
/*   Updated: 2022/09/05 17:22:45 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat br("test", 14);
        br.decrementGrade();
        br.incrementGrade();
        std::cout << br;
        Form form("form", 100, 15);
        br.signForm(form);
    }
    catch (std::exception &e)
    {
        std::cerr << (e.what()) << std::endl;
    }

    return 0;
}